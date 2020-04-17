#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include "Funciones.h"

int main()
{

    int op,flag=0,flag2=0;
    float x,y,resSuma,resResta,resDiv,resMult,resFacX,resFacY;
    char seguir='s',reescribir='n';


    do
    {
        menu("");
        getInt(&op);
        system("cls");
        while(op < 1 || op > 5)
        {
            //Validacion de opciones
            menu("Error. La opcion ingresada es invalida\n");
            getInt(&op);
            system("cls");
        }
        switch(op)
        {
        case 1:
            if (flag==0)
            {
                printf("Ingresar operando: \n");
                if(getFloat(&x))
                {
                flag=1;
                system("cls");
                }
                else
                {
                    printf("Error. No ha ingresado un numero.\n");
                    flag=0;
                    system("pause");
                    system("cls");
                }
            }else{
                printf("Desea reescribir el operando? S/N\n");
                fflush(stdin);
                reescribir=getchar();
                }
            if (reescribir=='s')
            {
                printf("Ingrese el operador nuevamente");
                if(!getFloat(&x))
                {
                printf("Error. No ha ingresado un numero.\n");
                system("pause");
                }
            }

            break;
        case 2:
            if (flag2==0)
            {
                printf("Ingresar operando: \n");
                if(getFloat(&y))
                   {
                    flag2=2;
                    system("cls");
                   }
                else
                {
                    printf("Error. No ha ingresado un numero.\n");
                    flag2=0;
                system("pause");
                system("cls");
                }
            }else{
                printf("Desea reescribir el operando? S/N\n");
                fflush(stdin);
                reescribir=getchar();
                }
            if (reescribir=='s')
            {
                printf("Ingrese el operador nuevamente");
                if(!getFloat(&y))
                {
                printf("Error. No ha ingresado un numero.\n");
                system("pause");
                system("cls");
                }
            }
            break;
        case 3:
            if(flag+flag2!=3)
            {
                error(flag+flag2);//sumo los flag para que la funcion error tome el resutlado como opcion para informar el error
            }
            else
            {
                resSuma=suma (x, y);
                resResta=resta (x, y);
                if(y!=0)
                    resDiv=division (x, y);
                resMult=multiplicacion (x, y);
                if(x>0)
                    resFacX=factorial (x);
                if(y>0)
                    resFacY=factorial (y);
                flag=2;
                printf("Operaciones realizadas con exito.\n\n");
                system("pause");
                system("cls");
            }
            break;
        case 4:
           if(flag+flag2!=4)
            {
            error(flag+flag2);//sumo los flag para que la funcion error tome el resutlado como opcion para informar el error
            }
            else
            {
                printf("El resultado de %.2f+%.2f es: %.2f. \n",x,y,resSuma);
                printf("El resultado de %.2f-%.2f es: %.2f. \n",x,y,resResta);
                if(y!=0)
                    printf("El resultado de %.2f/%.2f es: %.2f. \n",x,y,resDiv);
                else
                    printf("No se encuentra disponible a division por 0 (cero). \n");
                printf("El resultado de %.2f*%.2f es: %.2f. \n",x,y,resMult);
                if(x>0)
                    printf("El factorial de %.2f es: %.2f.\n",x,resFacX);
                else
                    printf("%.2f no es un numero natural positivo: \n",x);
                if(y>0)
                    printf("El factorial de %.2f es: %.2f.\n",y,resFacY);
                else
                    printf("%.2f no es un numero natural positivo: \n",y);
                printf("\nDesea realizar las operaciones nuevamente? S/N: ");
                fflush(stdin);
                if('s'==(seguir=getchar()));
                {
                resetFloat(&x);
                resetFloat(&y);
                resetInt(&flag);
                resetInt(&flag2);
                }

            }
            break;
        }
    }
    while(seguir=='s');
    return 0;
}




