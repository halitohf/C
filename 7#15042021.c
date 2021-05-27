/*Como saber si un numero es palindromo
con validadores*/
#include <stdio.h>
//Jose de Jesus Zaragoza
int main() {
    int num;
    int dig1, dig2, dig3, dig4, dig5;

    printf("Introduce un numero de 5 digitos: \n\t");
    scanf("%d", &num);

    if (num > 9999 && num < 1000000) {
        dig1 = num / 10000;
        num = num % 10000;

        dig2 = num / 1000;
        num = num % 1000;

        dig3 = num / 100;
        num = num % 100;

        dig4 = num / 10;
        dig5 = num % 10;

        if (dig1 == dig5 && dig2 == dig4) {
            printf("El numero es palindromo\n");
        } else {
            printf("El numero no es palindromo\n");
        }
    } else {
        printf("Error de monoware: no es un numero de 5 digitos.");
    }
    return 0;
}