/*Programa que nos da el valor de un carácter en código ASCII
            v Ejercicios Especiales 1.1 
	    Programa elaborado por URIEL RODEA
                    GRUPO 1151
                  EQUIPO numero 1                          */

#include <stdio.h> //incluimos librería estándar

int main () //Función principal del programa
{
	char i;  //Declaramos una variable tipo carácter
	
	int j;   //Declaramos una variable tipo entero
	
	printf ("Dame un caracter cualquiera y te dire su valor en codigo ASCII\n");
	
	scanf  ("%c", &i); //Asignamos el valor dado a la variable i
	
	j=i; //Asignamos el valor de i a j                
	
	printf ("Su valor en codigo ASCII es: %d",j);
	
	return 0;
}
