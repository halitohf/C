//Estructura Principal.
#include <stdio.h>
//Función Principal.
int main(){

    int num1, num2, num3;

    printf("Introduce el Numero 1 :\n\t");
    scanf("%d",&num1);

    printf("Introduce el Numero 2 :\n\t");
    scanf("%d",&num2);

    printf("Introduce el Numero 3 :\n\t");
    scanf("%d",&num3);

    if (num1 < num2 && num2 < num3){
        printf("Esta en la forma creciente\n");
    } else{
        printf("No esta en la forma creciente\n");
    }
    

    return 0;
}