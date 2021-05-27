#include <stdio.h> 
int main () {
    //Proyecto que pide una calificación y muestra si es aprobatoria.

    int num;

    printf("Proyecto que pide una calificación y muestra si es aprobatoria.\n");

    printf("Ingrese la calificación\n");
    scanf("%d", &num);

    if (num <= 5){
        printf("La calificación : %d no es aprobatoria.\n", num);
    }else {
        printf("La calificación : %d es Aprobatoria.\n", num);
    }
    return 0;
}