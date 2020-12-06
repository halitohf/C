// José de Jesús Zaragoza Rosales Grupo:306
#include <stdio.h>
#include <string.h>

int main() {
    char School[20];
    int Degree;
    char Turn = (char)97;

    printf("Programa que solicita al Usuario Info.\n");

    printf("¿En que escuela estudias?\n");
    scanf("%s", School);

    printf("¿En que grado te encuentras?\n");
    scanf("%d", &Degree);
    
    Turn = getchar();
    printf("¿En que turno estas inscrito?\n");
    scanf("%c", &Turn);

    printf("Estudias en la escuela: %s Te encuentras en el grado: %d y en el turno: %c\n", School, Degree, Turn);
    return 0;

}