/*Programa que encuentre el número mayor entre dos números
              Ejercicios Especiales 3 
                    GRUPO 1151
                  EQUIPO numero 1                          */

#include <stdio.h> //incluimos librería estándar

int main () //Función principal del programa
{
	float a; //declaramos una variable que puede ser entero o con decimales
	
	float b; //declaramos otra variable que puede ser entero o con decimales
	
	printf ("Dame dos numeros y te dire cual es el mayor\n");
	
	printf("Cual es el primer numero: \n");
	
	scanf("%f",&a); //Asignamos el primer valor a la variable a
	
	printf("Cual es el segundo numero: \n");
	
	scanf("%f",&b);//Asignamos el segundo valor a la variable b
	
	if (a>b)//Si a es mayor que b hará esto
	{
		printf("El numero %g es mayor a %g",a,b);
	}
	else if (a<b)//Si a es menor que b hará esto
	{
		printf("El numero %g es mayor a %g",b,a);
	}
	else //Si son iguales hará esto
	{
		printf("El numero %g es igual a %g",b,a); //NOTA: use %g para que no me imprimiera los valores tal como los escribía
	}
	
	return 0;
  }
