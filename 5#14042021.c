#include <stdio.h>
int main(){
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;
    int triangulo = 0;

    printf("Programa que indica si es un triangulo y de que tipo es. \n");
    printf("Ingresa el Primer Cateto: \n\t");
    scanf("%d",&lado1);
    printf("Ingrese el segundo Cateto: \n\t");
    scanf("%d",&lado2);
    printf("Ingresa la Hipotenusa : \n\t");
    scanf("%d",&lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        triangulo = 1;
    } else if (lado1 == lado2 && lado1 != lado3 || lado1 != lado2 && lado1 == lado3 || lado2 == lado3 && lado1 != lado3 || lado2 == lado3 && lado1 != lado3) {
        triangulo = 2;
    } else {
        triangulo = 3;
    }

    if (triangulo == 1){
        printf("Todos los lados son iguales es un triangulo Equilatero.\n\n");
    } else if (triangulo == 2){
        printf("Solo dos lados son iguales, es un Triangulo Isoseles.\n\n");
    } else if (triangulo == 3){
        printf("Todos los lados son distintos es un triangulo Escaleno\n\n");
    } else {
        printf("Todos los lados son distintos, es un Triangulo Escaleno\n\n");
    }
    return 0;
}