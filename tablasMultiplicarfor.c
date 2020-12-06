#include <stdio.h>
//José de Jesús Zaragoza Rosales
int main()
{
    int num = 0;
    int res = 0;

    printf("Ingresa un numero\n");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
    {
        res = num * i;
        printf("%d * %d = %d\n", num, i, res);
    }

    return 0;
}