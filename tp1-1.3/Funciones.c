#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include "Funciones.h"

//validaciones

int getInt (int *num)
{
    int i=0,valor,vf=1,controlSigno=0;//vf=verdadero o falso
    char nValido[50];
    fflush(stdin);
    gets(nValido);
    valor=strlen(nValido);
    while(i<valor && vf==1 && controlSigno<2)
    {
        if(nValido[0]=='-' && i==0)
        {
            controlSigno=1;
            i++;
        }
        else if(isdigit(nValido[i]))
            i++;
        else
        {
            vf=0;
            break;
        }
    }
    if(vf)
        *num=atoi(nValido);
    return vf;
}



int getFloat (float *valor)
{
    int tam,vf=1,cont=0,controlSigno=0;//vf=verdadero o falso
    char num[50];
    fflush(stdin);
    gets(num);
    tam=strlen(num);
    for(int i=0; i<tam && vf==1 && controlSigno<2; )
    {
        if(num[0]=='-' && i==0)
        {
            controlSigno=0;
            i++;
        }
        else if(isdigit(num[i]))
            i++;
        else if(num[i]!='.')
        {
            cont=2;
        }
        else
        {
            cont++;
            i++;
        }
        if(cont>1)
            vf=0;
    }
    if(vf==1)
        *valor=atof(num);
    return vf;
}

void resetFloat (float *a)
{
    *a = 0;
}

void resetInt (int *a)
{
    *a = 0;
}

//Operaciones aritmeticas
float suma (float a, float b)
{
    return a+b;
}
float resta (float a, float b)
{
    return a-b;
}
float division (float a, float b)
{
    return a/b;
}
float multiplicacion (float a, float b)
{
    return a*b;
}
float factorial (float a)
{
    int aux=a;
    for(int i=1; i<aux; i++)
    {
        a*=i;
    }
    return a;
}
void menu(char cabezera[])
{
    printf("%s",cabezera);
    printf("////////////CALCULADORA////////////\n\n");
    printf("Ingrese la opcion deseada.\n\n");
    printf("1)Ingresar 1er operando.\n");
    printf("2)Ingresar 2do operando.\n");
    printf("3)Calcular todas las operaciones.\n");
    printf("4)Informar resultados.\n");
    printf("5)Salir:\n\n");
}

void error(int op)
{
    switch(op)
    {
    case 0:
        printf("Error.Para realizar esta operacion, deben estar ingresados los 2 operadores.\n");
        printf("Falta ingresar ambos operadores.\n\n");
        system("pause");
        break;
    case 1:
        printf("Error.Para realizar esta operacion, deben estar ingresados los 2 operadores.\n");
        printf("Falta ingresar el 2do operador.\n\n");
        system("pause");
        break;
    case 2:
        printf("Error.Para realizar esta operacion, deben estar ingresados los 2 operadores.\n");
        printf("Falta ingresar el 1do operador.\n\n");
        system("pause");
        break;
    case 3:
        printf("Para ver los resultados primero debe realizar el paso 3. \n");
        system("pause");
        break;
    case 4:
        printf("Ambos operadores se encuentran cargados.\n");
        printf("Las operaciones fueron realizadas con exito.\n\n");
        system("pause");
        break;
    default:
        break;
    }
}
