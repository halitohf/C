#include <stdio.h>

int main()
{
    int num_1;
    int num_2;
    int val;

    printf("Calculadora basica \n");
    printf("Selecione un numero del 1 al 4");

    scanf("%d", &val);
    switch (val)
    {
    case 1:
        //Suma
        printf("Suma\n");
        scanf("%d",&num_1);
        scanf("%d",&num_2);
        int suma;
        printf("Suma de  %d y %d es: %d \n", num_1, num_2, suma = num_1 + num_2);
        break;
    case 2:
        printf("Resta\n");
        scanf("%d",&num_1);
        scanf("%d",&num_2);
        int resta;
        printf("Resta de  %d y %d es: %d \n", num_1, num_2, resta = num_1 - num_2);
        break;
    case 3:
        printf("Multiplicacion\n");
        scanf("%d",&num_1);
        scanf("%d",&num_2);
        int multip;
        printf("Multiplicacion de  %d y %d es: %d \n", num_1, num_2, multip = num_1 * num_2);
        break;
    case 4:
        printf("Divicion\n");
        scanf("%d",&num_1);
        scanf("%d",&num_2);
        int div;
        printf("Divicion de  %d y %d es: %d \n", num_1, num_2, div = num_1 / num_2);
        break;
    default:
        printf("El numero ingresado no es correcto intentalo de nuevo.\n");
        break;
    }

    return 0;
}