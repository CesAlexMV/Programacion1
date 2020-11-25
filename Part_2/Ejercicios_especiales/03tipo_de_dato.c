/*Programa que revise si un carácter dados es mayúscula,
     minúscula, número o un carácter especial.
     Programa elaborado por URIEL RODEA
             Ejercicios Especiales 2
                    GRUPO 1151
                  EQUIPO numero 1                          */

#include <stdio.h> //incluimos librería estándar

int main () //Función principal del programa
{
	char i;  //Declaramos una variable tipo carácter
    
	printf ("Dame un caracter y te dire lo que es:\n");
	
	scanf ("%c",&i); //Asignamos el valor a i
	
	if (i>='0' && i<='9') //Si es dígito hará esto
	{
		printf("El caracter dado es digito");
	}
	else if (i>='a' && i<='z')//Si es minúscula hará esto
	{
		printf("El caracter dado es minuscula");
	}
	else if (i>='A' && i<='Z')//Si es mayúscula hará esto
	{
		printf("El caracter dado es mayuscula");
	}
	else
	{
		printf("El caracter dado es carcter especial");//Si es caracter especial hará esto
	}
	
	return 0;

}
