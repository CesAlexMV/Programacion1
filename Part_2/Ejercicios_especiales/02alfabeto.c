/*Programa que nos da si el carácter dado pertenece al alfabeto
              Ejercicios especiales 1.2
	      Programa elaborado por URIEL RODEA
                    GRUPO 1151
                  EQUIPO numero 1                          */

#include <stdio.h> //incluimos librería estándar

#include <ctype.h> //librería que nos ayudara para saber si es del alfabeto o no
int main () 
{
	char j; //Declaramos la variable de tipo carácter
	
	printf ("Dame un caracter cualquiera y te dire si pertenece al alfabeto o no\n");
	
	scanf  ("%c", &j); //Asignamos el valor dado a la variable j
	
	
	if (isalpha(j))  //Si el carácter pertenece al alfabeto hace esto
	{
		printf ("El caracter pertenece al alfabeto");
	}
	else //Si no pertenece al alfabeto hace esto
	{
		printf ("El caracter no pertenece al alfabeto");
	}
	
	return 0;
}
