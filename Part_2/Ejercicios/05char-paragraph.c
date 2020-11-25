#include <stdio.h>

int main ( )
{
  char n[0];
  int a;
  printf ("Digita una letra: \n");
  scanf("%c", &n);
  printf("Digite un numero: \n");
  scanf("%i", &a);
  printf ("\nSu letra es %c y el numero es %i ", n[0], a);
  return 0;
}
