#include <stdio.h>

int main()
{
    int fila = 1, columna = 1;

    while (fila <= 3)
    {
        columna = 1;
        while (columna <= 3)
        {
            if (columna % 2 == 0)
            {
                printf("<");
            }
            else
            {
                printf(">");
            }
            columna++;
        }
        fila++;
    }
}