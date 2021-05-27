#include <stdio.h>
int main(){
    

    int columnas = 1;        
    int lineas = 1;

    while(lineas <= 5 ){
        columnas = 1;
        while( columnas <= 5){   
            if( columnas >= lineas){
                printf("*");
            }   
            else{
                printf(" ");
            }                            
            columnas++; 
        }
        printf("\n");
        lineas++;
    }            
    return 0;
}