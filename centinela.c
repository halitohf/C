#include <stdio.h>

int main (){
    int total = 0;
    int calificacion = 0;
    int promedio = 0;

    while (calificacion != -1) {
        printf("ingrese calificación : para salir -1");
        scanf("%d",&calificacion);
        if(calificacion != -1){
            total = total + calificacion;
            promedio++;
        }
    }
    printf("promedio es igual a %d", total / promedio);

   return 0; 
}