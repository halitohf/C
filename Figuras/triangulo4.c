#include <stdio.h>

int main()
{
    int filas = 1;
    int columnas = 1;

    while (columnas <= 5)
    {
        filas = 1;
        while (columnas <= 5)
        {
            if (columnas <= filas)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        columnas++;
    }
    printf("/n");
}
