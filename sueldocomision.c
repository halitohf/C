//José de Jesús Zaragoza Rosales

#include <stdio.h>
int main()
{
    float sueldo = 0;
    float comision = 0;
    float result = 0;
    float final = 0;

    printf("Ingresa tu sueldo neto : \n");
    scanf("%f", &sueldo);
    printf("Ingresa el total de tus ventas: \n");
    scanf("%f", &comision);

    result = (sueldo * .10);
    result = result * comision;
    final = result + (sueldo * 4);
    printf("EL total de tus comisiones es %.1f pesos.\n",result);
    printf("Tu sueldo final es: %.1f pesos.\n ", final);
    return 0;
}
