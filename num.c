#include <stdio.h>
//Jose de Jesus Zaragoza Rosales
int main()
{
    int num1 = -20;
    int num2 = 15;
    int n;

    for (; num1 <= num2; num1++)
    {
        n = num1;
        if (n % 3 == 2) {
            printf("%d\n", n);
        }
    }
    return 0;
}