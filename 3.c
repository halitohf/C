#include <stdio.h>
//Jose de Jesus Zaragoza Rosales
int main()
{
    int i, j, n;

    printf("Ingresa N: \n");
    scanf("%d", &n);

    i = 0;
    while (i < n) {
        j = 0;
        while (j < n)
        {
            if ((n - i < 2 * j) && (n + i > 2 * j))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}