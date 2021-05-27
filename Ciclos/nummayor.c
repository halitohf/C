#include <stdio.h>

int main() {
	int num_1; //numero que introduce el usuario
	int num_2 = -1; //almacena el valor mayor

	int contador = 0;
	while(contador < 5){
		printf("Introduce un numero:\n");
		scanf("%d",&num_1);

		if(num_1 > num_2){
			num_2 = num_1;
			printf("%d", num_1);
		}
		contador++;
	}
	printf("El numero mayor es: %d", num_2);
	return 0;
}
