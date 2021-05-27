#include <stdio.h>

int main()
{
 
 int ladoA, ladoB, ladoC;
    printf("introduce el lado a: \t");
    scanf("%d", &ladoA);
    
    printf("introduce el lado b: \t");
    scanf("%d", &ladoB);
    
    printf("introduce el lado c: \t");
    scanf("%d", &ladoC);
    
    /*
    if ( ladoA + ladoB > ladoC){
         if ( ladoA + ladoC > ladoB){
             if( ladoB + ladoC > ladoA)
                printf("ES un triangulo");
          }
    }*/
    
     if ( ladoA + ladoB > ladoC && ladoA + ladoC > ladoB
     &&  ladoB + ladoC > ladoA){
        printf("ES un triangulo\n"); 
        
        if(ladoA == ladoB &&  ladoA == ladoC)
             printf("ES un triangulo equilatero\n"); 
             
        if(ladoA == ladoB ||  ladoA == ladoC || ladoB == ladoC)
             printf("ES un triangulo isosceles\n");      
             
     }
     
     int numero1 = 9, numero2 = 8;
     if(numero1 == 9  || numero2 == 7)
        printf("si entro al or\n");
        
    if( !(numero1==5))    
       printf("si entro a la negacion !\n");

    return 0;
}
