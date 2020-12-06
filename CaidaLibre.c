#include <stdio.h>

const double Grav = 9.81;

int main() {
    printf("Escribir Programa que calcula la altura a la que debe caer un objeto para golpear al suelo en (X)m/s\n");
        float altura = 0, velocidadFinal = 0;
	printf("%.2f\n", altura);
	printf("%.2f\n", velocidadFinal);
	printf("%.2f\n", Grav);
        printf("Escribir la velocidad a la que deseas que caida el objeto en (Metros/Segundo)\n");
        scanf("%f", &velocidadFinal);
        altura = (velocidadFinal * velocidadFinal) / (2 * Grav);
        printf("La altura a la que el objeto caera a: %.2fm/s Es a: %.2fm de altura.\n", velocidadFinal,altura);
        
        
        return 0;
}
