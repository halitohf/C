#include <stdio.h>
/*Programa que Aplicación que lea dos enteros y
muestre el mayor de ellos o muestre si son iguales*/
int main() {
    int num1;
    int num2;
    printf("\n//Ingresa dos numeros.//\n\nInserta el primero : \t");
    scanf("%d", &num1);
    printf("Ingresa el segundo: \t");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("El numero %d es mayor que %d\n", num1, num2);
    } else if(num2 > num1) {
        printf("El numero %d es mayor que %d\n",num2, num1);
    }

    if (num1 == num2) {
        printf("\nLos numeros son iguales\n");
    } else {
        printf("\nLos numeros no son iguales\n");
    }

    return 0;
}