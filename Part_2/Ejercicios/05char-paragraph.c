#include <stdio.h>   
int main ( )
{
  char n[1];
  int a;
  printf ("Digita una letra.\n");
  scanf("%c", &n);
  printf("Digite un numero");
  scanf("%i", &a);
  printf ("\nSu letra es %c y el numero es %i ", n, a);
  return 0;
}
