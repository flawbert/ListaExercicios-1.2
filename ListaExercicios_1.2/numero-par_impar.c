#include <stdio.h>

int main() {
  printf("Escreva um número inteiro: ");
  int numero;
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("O número %d é par", numero);
  } else {
    printf("O número %d é impar", numero);
  }
}