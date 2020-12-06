#include <stdio.h>
/* José de Jesús Zaragoza Rosales */

int main()
{

    int num = 0;
    float num1 = 0;
    float num2 = 0;
    float out = 0;
    do
    {

        printf("Calculadora super Basica\n");
        printf("|-----------------------------|\n");
        printf("| 1 : Para suma               |\n");
        printf("| 2 : Para resta              |\n");
        printf("| 3 : Para Multiplicación     |\n");
        printf("| 4 : Para Divición           |\n");
        printf("| 5 : Ingresa otra opcion     |\n");
        printf("|-----------------------------|\n");
        printf("Ingresa un valor del 1 al 4\n");
        scanf("%d", &num);
    } while (num >= 0 && num <=4);{
        switch (num)
        {

        case 1:
            printf("---Suma---\n");
            printf("Ingresa tu primer numero\n");
            scanf("%f", &num1);
            printf("Ingresa tu segundo numero\n");
            scanf("%f", &num2);
            out = num1 + num2;
            printf("La suma de %.1f con %.1f es igual a: %.1f\n", num1, num2, out);
            break;
        case 2:
            printf("---Resta---\n");
            printf("Ingresa tu primer numero\n");
            scanf("%f", &num1);
            printf("Ingresa tu segundo numero\n");
            scanf("%f", &num2);
            out = num1 - num2;
            printf("La resta de %.1f con %.1f es igual a: %.1f\n", num1, num2, out);
            break;
        case 3:
            printf("---Multiplicacion---\n");
            printf("Ingresa tu primer numero\n");
            scanf("%f", &num1);
            printf("Ingresa tu segundo numero\n");
            scanf("%f", &num2);
            out = num1 * num2;
            printf("La multiplicacion de %.1f con %.1f es igual a: %.2f\n", num1, num2, out);
            break;
        case 4:
            printf("---Divicion---\n");
            printf("Ingresa el numerador\n");
            scanf("%f", &num1);
            printf("Ingresa tu dividendo\n");
            scanf("%f", &num2);
            out = num1 / num2;
            if (num1 == 0 && num2 == 0)
            {
                printf("Error");
            }
            else
            {
                printf("La divicion de %.1f con %.1f es igual a: %.2f\n", num1, num2, out);
            }
            break;

        default:
            printf("---Ingresa un Valor Valido---\n");
            break;
        }
    }
    return 0;
}