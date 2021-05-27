#include <stdio.h>

int main(){

    int opcion;

    printf("Escoge una opcion: \n1. Sumar\n2. Restar\n3.Residuo\n");
    scanf("%d", &opcion);

    switch(opcion){

        case 1: 
        //accciones a realizar
        printf("Entro a la suma\n");
        break;

        case 2: 
        //accciones a realizar
        printf("Entro a la resta\n");
        break;

        case 3: 
        //accciones a realizar
        printf("Entro al residuo\n");
        break;

        default:
        printf("no es ninguna opcion valida!!\n");
    }

    return 0;
}
