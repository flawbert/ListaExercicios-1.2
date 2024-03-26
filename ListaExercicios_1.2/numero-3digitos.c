#include <stdio.h>
int main() {
  printf("Insira um número de 3 dígitos: ");
  int numero;
  scanf("%d", &numero);
  int c = numero / 100;
  int d = (numero % 100) / 10;
  int u = (numero % 100) % 10;

  printf("Centena: %d\nDezena: %d\nUnidade: %d\n", c, d, u);

  return 0;
}