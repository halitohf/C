//Calcula la paga neta de un trabajador conociendo el numero de horas trabajadas, la tarifa horara y la tasa de impuestos
/*
pagaBruta = numeroHoras * tarifas
calImpuestos = pagaBruta * tasa
CalPagoNeto = pagaBruta - impuestos
*/

#include <stdio.h>

main() {
    float horasTrabajadas = 0.0;
    float tarifaHoraria = 0.0;
    float tasaDeImpuestos = 0.0;
    float pagaBruta = 0.0;
    float impuestos = 0.0;
    float pagoNeto = 0.0;
    printf("Programa que calcula la Paga Neta. \n");

    printf("Ingresa el Numero de Horas Trabajadas.\n");
    scanf("%f", &horasTrabajadas);

    printf("Ingresa la tarifa horaria\n");
    scanf("%f", &tarifaHoraria);

    printf("Ingresa la tasa de impuesto\n");
    scanf("%f", &tasaDeImpuestos);
    
    pagaBruta = horasTrabajadas * tarifaHoraria;
    impuestos = pagaBruta * tasaDeImpuestos;
    pagoNeto = pagaBruta - impuestos;

    printf("Tu pago NETO es : %d\n");

    return 0;
}

