#include <stdio.h>
//José de Jesús Zaragoza Rosales
int main()
{
    printf("Hello\n");
    int cont = 0;
    int num = 0;
    int res = 0;

    printf("Ingresa un numero\n");
    scanf("%d", &num);
    while (cont <= 10)
    {
        res = num * cont;
        printf("%d * %d = %d\n", num, cont, res);
        cont++;
    }
    return 0;
}