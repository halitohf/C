#include <stdio.h>

int main() {
	int num=0;

	printf("Ingresa un numero");

	scanf("%d",&num);
	printf("%d\n",num);

	for(int i = 1;i > num;num++){

	char opc='*';
		printf("%d\n",num);
		printf("%c\n",opc);
	}
}
