#include <stdio.h>
#include <math.h>

int main(){
    int numero1;
    int numero2;
    double resultado;

    printf("Introduce la base: ");
    scanf("%d", &numero1);
    
    printf("Introduce la potencia: ");
    scanf("%d", &numero2);

    
    resultado = pow(numero1, numero2);

    printf("%d elevado a %d = %.2f\n", numero1, numero2, resultado);

    return 0;
}