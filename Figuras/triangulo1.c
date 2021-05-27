#include <stdio.h>

int main() {
	int contador2 = 1;
	int numeroAsteriscos = 1;
	while(contador2 <= 5){
		int contador = 1;
		while(contador <= numeroAsteriscos){
			printf("*");
			contador++;
		}
		printf("\n");
		numeroAsteriscos++;
		contador2++;
	}
	return 0;
}
