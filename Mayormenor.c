#include <stdio.h>
#include <conio.h>

int main() {

    int n1 = 0, n2 = 0, n3 = 0;

    do {
        clrscr();
    printf("Proyecto que ordena de mayor a menor tres numeros.\n");

    printf("Ingresa el 1er numero\n");
    scanf("%d",&a);
    printf("Ingresa el 2do numero\n");
    scanf("%d",&b);
    printf("Ingresa el 3er numero\n");
    scanf("%d",&c);

    if (n1>=n2 && n1 >= n3){
        if(n2>=n3){
            printf("nn%d",n1);
            printf("nn%d",n2);
            printf("nn%d",n3);
            if(c < b && b < a && a < c){
                printf("%d %d %d", c, b, a);
            }
        }
    }
    return 0;
}