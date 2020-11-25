/* ***** Convert.c ******/
// Recuerda documentar tus codigos
#include <stdio.h> // Se agrega la biblioteca
int main(){ // función principal
  int a=11; // tipo de dato: valor entero, se asigna la variable
  float b=4.0; //tipo de dato: valor flotante, se asigna la variable
  b = b + a; // NO OLVIDAR que esta operación es de asignación y no matemática
  printf("El valor de a se convierte en float (%f) antes de la suma\n", b);
// Se imprime las leyenda, llamando al tipo de dato correspondiente
// Y \n para que se corte el renglón
  b= a/5.; // NO OLVIDAR que esta operación es de asignación y no matemática
  printf("El valor de a se divide y queda float (%f) despues se convierte a float y se asigna a b\n", b); // Se imprime las leyenda, llamando al tipo de dato correspondiente
// Y \n para que se corte el renglón
  b= b/5; // NO OLVIDAR que esta operación es de asignación y no matemática
  printf("Toma el valor anterior de b, Convierte el valor 5 a tipo float, hace una division (%f) y despues lo asigna a b\n", b);
// Se imprime las leyenda, llamando al tipo de dato correspondiente
// Y \n para que se corte el renglón
  return 0;
}
