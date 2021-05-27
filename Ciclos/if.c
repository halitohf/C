#include <stdio.h>

int main()
{
    printf("If en C\n");

    int num;
    printf("Ingrese numero mayor que 100  y menor de 205\t");
    scanf("%d", &num);
    if (num > 100 && num < 205)
    {
        printf("Muy bien\n\n");
    }
    else
    {
        printf("El usuario no esta leyendo las intruciones previas.\n\n");
    }
    return 0;
}