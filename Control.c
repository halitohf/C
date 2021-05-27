#include <stdio.h>
//Zaragoza Rosales JOse de Jesus
//19-003-0117
int main()
{
    char empleado = ' ';
    int sueldo;
    int retencion;
    int totalPagar;
    int var = 1;
    int antiguedad;

    //Menu
    printf("|-------------------------------|\n");
    printf("| Tipo de empleado--------------|\n");
    printf("|                               |\n");
    printf("| a) Temporal  -----------------|\n");
    printf("| b) Planta no supervisor ------|\n");
    printf("| c) Planta supervisor----------|\n");
    printf("|                               |\n");
    printf(" Ingresa la opcion:  \t\n");
    scanf("%c", &empleado);


    switch (empleado)
    {
    case 'a':
        //Empleado Temporal
        printf("Ingrese el sueldo base :\n");
        scanf("%d", &sueldo);
        retencion = sueldo * .2;
        sueldo = sueldo - retencion;
        printf("Retencion : %d\n", retencion);
        printf("Total a pagar = %d\n", sueldo);

        break;
    case 'b':
        printf("Ingresa sueldo base: \n");
        scanf("%d", &sueldo);
        if (sueldo >= 1000)
        {
            retencion = sueldo * .3;
            sueldo = sueldo - retencion;
            printf("retención : %d\n", retencion);
            printf("Total a pagar: %d\n", sueldo);
        }
        else {
            retencion = sueldo * .2;
            sueldo = sueldo - retencion;
            printf("retención : %d\n", retencion);
            printf("Total a pagar = %d\n", sueldo);
        }
        //Empleado no supervisor
        break;
    case 'c':
        printf("Ingresa el sueldo base: \n");
        scanf("%d", &sueldo);
        printf("Ingresa la antigüedad del supervisor en años: \n");
        scanf("%d", &antiguedad);
        if (antiguedad <= 5)
        {
            retencion = sueldo * .01;
            sueldo = sueldo - retencion;
            printf("Retención por ser supervisor: %d\n", retencion);
            printf("Total a pagar: %d \n", sueldo);
        }
        else {

            retencion = sueldo * 0.05;
            sueldo = sueldo - retencion;
            printf("Retención por ser supervisor: %d\n", retencion);
            printf("Total a pagar %d\n", sueldo);
        }

        //Empleado Planta supervisor
        break;

    default:
        break;
    }
    return 0;
}