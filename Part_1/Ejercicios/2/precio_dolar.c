#include <stdio.h>

int main()
{
    float peso;
    float dolar;
    float resultado;
    
    printf("Escribe una cantidad en pesos:");
    scanf ("%f",&peso);
    
    
    
    printf("Escribe el precio actual del dolar:");
    scanf ("%f",&dolar);
    
    resultado= peso/dolar;
      
    printf("Tienes %f dolares:",resultado);

    return 0;
}
