#include <stdio.h>

int cuadrado( int );

int main(){

        printf("El cuadrado de 3 es %d ", cuadrado(3));

    return 0;

}

int cuadrado(int numero){
    return numero * numero;
}