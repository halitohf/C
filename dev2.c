#include <stdio.h>

int main(){
    int x=0,y=0,z=0;
    printf("Ingresa 3 numeros\n");
    scanf("%d %d %d",&x, &y, &z);
    if (x < y && y < z)
    {
        printf("Orden numerico correcto\n");
    }else
    {
        printf("Orden numerico incorrecto\n");
    }
    
    
    return 0;
}