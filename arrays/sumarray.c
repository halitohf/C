//Jose de Jesus Zaragoza Rosales
#include <stdio.h>
int main()
{
    int t=0;
    printf("Suma de arrays\n");
    printf("De que tamaño quiere su vector?\n");
    scanf("%d",&t);
    int vec1[t],vec2[t],vec3[t];
    int i = 0;
    for (int i = 0; i < t; i++){
        printf("Ingresa los valores de tu vector\n\n");
        printf("vector 1 -- posición --> %d\t:",i);
        scanf("%d", &vec1[i]);
    }
    for (int i = 0; i < t; i++){
        printf("Ingresa los valores de tu vector\n\n");
        printf("vector 2 -- posicion --> %d\t:",i);
        scanf("%d", &vec2[i]);
    }
    printf("\n");
    for (int i = 0; i < t; i++){
        if(i%2 == 0){
        vec3[i] = vec1[i] + vec2[i];
        printf("La suma de %d y %d -- Posicion %d --> %d \n",vec1[i] ,vec2[i] ,i , vec3[i]);
    }
    }
    printf("\n");
    for (int i = 0; i < t; i++){
        if(i%2 == 1){
        vec3[i] = vec1[i] * vec2[i];
        printf("La multiplicacion de %d y %d -- Posicion %d --> %d \n",vec1[i] ,vec2[i] ,i , vec3[i]);
    }
    }
    return 0;
}