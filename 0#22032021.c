#include <stdio.h>
int main()
{
    int numero = 9;
    int numero2 = 4;
    int numero3 = 3;
    int numero4 = 9, numero5 = 3;

    //Prueba de Función printf
    /*Comentario
    esta es otra linea de comentario
    */
    printf("Bienvenid al mundo \n");
    printf("en lenguaje \"C");
    printf("\nsuma = %d", (numero + numero2));
    printf("\nresta = %d", (numero - numero2));
    printf("\nmultiplicacion = %d", (numero * numero2)); //Este codigo funciona para
    printf("\ndivicion = %d", (numero / numero2));
    printf("\nresiduo = %d", (numero % numero2));
    printf("\norden de ejecucion: = %d", (numero * numero2 - numero3 + numero / numero2));
    return 0;
}
