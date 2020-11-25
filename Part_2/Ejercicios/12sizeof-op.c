#include <stdio.h>
//La función recibe como único parámetro o el nombre de una variable, o el nombre de un tipo de datos, y devuelve su tamaño en bytes. De esta forma, sizeof(int) devuelve el número de bytes que se utilizan para almacenar un entero.
int main(){
  printf("Doble: %d\n", sizeof (double)); //El tipo de dato "double" ocupa 8 bytes de memoria
  printf("Entero: %d\n", sizeof (int)); //El tipo de dato "Int" ocupa de 2-4 bytes de memoria
  printf("flotante: %d\n", sizeof (float)); //El tipo de dato "float" ocupa 4 bytes de memoria
  printf("Caracter: %d\n", sizeof (char)); //El tipo de dato "char" ocupa 1 byte de memoria
  return 0;
}
