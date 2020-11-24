#include <stdio.h>
 
#include <math.h>
 
int main()
{
    float diagonal, altura, ancho;
  
printf("Digite la medida de la diagonal y el ancho de la puerta en metros");
  
scanf("%f %f",& diagonal,& ancho);
  
   altura = (sqrt(pow((diagonal),2) - pow((ancho),2)));
  
   printf("la altura de la puerta es: %f", altura);
  
   printf(" metros");
  
 
  return 0;
}
