#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sumaXvalor(int a, int b);
void sumaXreferencia(int a, int b, int *resultado);

int main() {
  int a = 5;
  int b = 2;
  int resultado = 0;
  printf("Valores:\n%i\n%i\n", a, b);

  printf("Paso de Parametros por Valorn\n");
  resultado = sumaXvalor(a, b);
  printf("Resultado: %d\n", resultado);

  printf("Paso de Parametros por ReferencianPasamos el valor de posición de la memoria en la variable resultado: %d",resultado);
  sumaXreferencia(a, b, &resultado);
  printf("Resultado: %d\n", resultado);
  return 0;
}

int sumaXvalor(int a, int b) {
  return a + b;
}

void sumaXreferencia(int a, int b, int *resultado) {
  *resultado = a + b;
}
