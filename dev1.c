#include <stdio.h>

int main(){
    int a=0,b=0,c=0;
    printf("Ingrese 3 numeros.\n");
    scanf("%d %d %d", &a, &b, &c);
    //printf("a= %d b = %d c= %d\n",a,b,c);
    if (a > b && a > c)
    {
        printf("a is mayor a = %d\n",a);
    }else if (b > a && b > c )
    {
        printf("b is mayor b = %d\n",b);
    }else if (c > a && c > b)
    {
        printf("c is mayor c = %d\n",c);
    } else

    return 0;
}
