#include <stdio.h> //Se asigna la biblioteca
 
// Cómo funcionan los operadores relacionales: Los operadores relacionales son símbolos que se usan para comparar dos valores.
//Si el resultado de la comparación es correcto la expresión considerada es verdadera, en caso contrario es falsa.
 
int main() //entero y función principal
{
   int a, b, c; //Ej. = 5, b = 5, c = 10; //asignas las variables correspondientes
 
printf("dame el valor de a=");
scanf("%d", &a);//& es un operador lógico(booleano) que asigna un valor a la variable
 
printf("dame el valor de b=");     
scanf("%d", &b);//& es un operador lógico(booleano) que asigna un valor a la variable
 
 
printf("dame el valor de c=");     
scanf("%d", &c);//& es un operador lógico(booleano) que asigna un valor a la variable
 
   printf("hemos obtenido\n");
   printf("%d == %d = %d \n", a, b, a == b); // true: verdadero
   printf("%d == %d = %d \n", a, c, a == c); // false: falso
 
 
   printf("%d > %d = %d \n", a, b, a > b); //false: verdadero
   printf("%d > %d = %d \n", a, c, a > c); //false: falso
 
 
   printf("%d < %d = %d \n", a, b, a < b); //false: verdadero
   printf("%d < %d = %d \n", a, c, a < c); //true: falso
 
   printf("%d != %d = %d \n", a, b, a != b); //false: verdadero
   printf("%d != %d = %d \n", a, c, a != c); //true: falso
 
 
   printf("%d >= %d = %d \n", a, b, a >= b); //true: verdadero
   printf("%d >= %d = %d \n", a, c, a >= c); //false: falso
 
 
   printf("%d <= %d = %d \n", a, b, a <= b); //true: verdadero
   printf("%d <= %d = %d \n", a, c, a <= c); //true: falso
 
   return 0;
}
//Cuando el resultado es falso el programa regresa un número 0
//Cuando el resultado es verdadero, el programa asigna un número 1
