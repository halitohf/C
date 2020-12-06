//Diseñar un programa que cuente el número de sus entradas que son positivas, negativas y cero.

#include <stdio.h>

int num=0, negativo=0, positivo=0, cero=0;
char resp=' ';

int main (){

printf("\n\t\t Este programa te indicara cuantos numeros que positivos, negativos o cero \n");
do{

    printf("\nIngresa un numero\n");
    scanf(" %d",&num);

    if(num > 0)

        positivo++;
    
    else if (num==0)
    
        cero++;
        
    else
    
        negativo++;
    
    printf("\n Desea Ingresar otro numero?: s/n \n");
    scanf(" %c",&resp);
} while (resp=='s');

printf("\nIngresaste %d numeros negativos, %d numeros positivos y %d numero 0 \n\n",negativo,positivo,cero);

return 0;
}
