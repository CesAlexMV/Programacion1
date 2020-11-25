/* ******* Conver-exp ******/
 
#include <stdio.h>
 
/*
Este programa muestra la forma de realizar conversiones explícitas de
tipo de constantes.
*/
 
int main(){
 
int a = 11; 
double b = 4.6;
// Se crean 2 variables con diferente tipo de dato, uno entero y otro doble
 
 
printf("\v Usando el formato (tiponombre)valor, podemos cambiar el tipo de dato (CAST).\n"); // 
 
 
printf("Por ejemplo a = %i, para cambiar a float, usamos el formato (float)a = %f \n\v", a, (float)a);
// se puede cambiar el tipo de dato usando el formato (tipo de dato)valor, por ejemplo para cambiar a float, usamos el formato (float)a
 
 
printf("Por ejemplo b = %f, para cambiar a cambiar a entero, usamos (int)b =  %i \n\v", b, (int)b);
// se puede cambiar el tipo de dato usando el formato (tipo de dato)valor, por ejemplo para cambiar a entero, usamos el formato (int)b
 
return 0;
}
