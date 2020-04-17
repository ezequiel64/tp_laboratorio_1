#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


/** \brief Suma 2 numeros.
 *
 * \param operador 1.
 * \param operador 2.
 * \return retorna valor de la suma.
 *
 */
float suma (float a, float b);


/** \brief resta 2 numeros.
 *
 * \param operador 1.
 * \param operador 2.
 * \return retorna valor de la resta.
 *
 */
float resta (float a, float b);


/** \brief divide 2 numeros.
 *
 * \param operador 1.
 * \param operador 2.
 * \return retorna valor de la division.
 *
 */
float division (float a, float b);


/** \brief multiplica 2 numeros.
 *
 * \param operador 1.
 * \param operador 2.
 * \return retorna valor de la mulltiplicacion.
 *
 */
float multiplicacion (float a, float b);


/** \brief Realiza el factoreo del numero recibido por parametro.
 *
 * \param operador 1.
 * \return retorna valor de factoreo.
 *
 */
float factorial (float a);


/** \brief Valida el ingreso de un entero y lo asigna por referencia en el caso de ser uno.
 *
 * \param int *num--puntero a la variable entera donde se va cargar el valor.
 * \return vf--1 si es entero 0 si no cumple con las condiciones para ser un entero.
 *
 */
int getInt (int *num);

/** \brief Valida el ingreso de un flotates y lo asigna por referencia en el caso de ser uno.
 *
 * \param float* valor--puntero a la variable fotante donde se va cargar el valor de ser correcto.
 * \return int vf--1 si es flotante -- 0 si no cumple con las condiciones para ser un entero.
 *
 */
int getFloat (float *valor);


void resetFloat (float *a);
/** \brief reinicializa las variables flotantes
 *
 * \param puntero de la variable a pizar
 *
 */


void resetInt (int *a);
/** \brief reinicializa las variables entera
 *
 * \param puntero de la variable a pizar
 *
 */



 /** \brief Informa los errores que puede tener el usuario al ingresar mal a las opciones.
 *
 * \param se envia la convinacion de flags las cuales indican el numero del error.
 *
 */
void error(int a);

/** \brief muestra el menu de opciones de programa
 *
 * \param se puede mandar un mensaje como cabezal de informacion Dejar las comillas en blanco en el caso de no utilizar este parametro.
 * \return
 *
 */
void menu(char cabezera[]);


#endif // FUNCIONES_H_INCLUDED
