#include <stdio.h>

int main () {
	printf("Programa que realiza una conversion de Grados °C a °F\n");
	float C;
	float F;
	printf("Ingresa Grados de tipo °F\n");
	scanf("%f", &C);
	F = C * 9/5 + 32;
	printf("Los Grados: %f", C "°C" " Es igual a: %f", F"°F" );

	return 0;

