#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0, b = 0, c = 0, disc = 0, x1 = 0, x2 = 0;
    printf("Programa que realiza una solución cuadratica de segundo grado.\n");

    printf("Ingresa el cociente cuadratico\n");
    scanf("%f", &a);
    printf("Ingresa el cociente lineal\n");
    scanf("%f", &b);
    printf("Ingresa la constante\n");
    scanf("%f", &c);

    disc = pow(b, 2) - 4 * a * c;
    if (a != 0)
    {
        if (disc < 0)
        {
            printf("Tiene raizes imaginarias\n");
        }
        else
        {
            x1 = (-b + sqrt(disc)) / (2 * a);
            x2 = (-b - sqrt(disc)) / (2 * a);
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
    }
    else
    {
        printf("El cociente cuadratico debe ser fiderente de 0");
    }
}
