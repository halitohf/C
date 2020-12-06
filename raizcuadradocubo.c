//José de Jesús Zaragoza Rosales

#include <stdio.h>

#include <math.h>

int main() {
    double num = 0;
    double cuadrado = 0;
    double cubo = 0;
    
    printf("Ingresa un numero para resivir su raiz cuadrada y su cubica.\n");
    scanf("%lf", &num);
    
    cuadrado = pow(num,1.0/2.0);
    printf("La raiz cuadrada de %.2f es igual a: %.2f\n",num ,cuadrado);
    
    cubo = pow(num,1.0/3.0);
    printf("La raiz cubica de %.2f es igual a: %.2f\n",num , cubo);
    
    return 0;
}
