#include <stdio.h>

int main() {
	int contador2 = 1;
	while(contador2 <= 5){
		int contador = 1;
		while(contador <= 5) {
			printf("* ");
			contador++;
		}
		printf("\n");
		contador2++;
	}
	return 0;
}
