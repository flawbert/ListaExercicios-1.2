#include <stdio.h>

int main() {
  printf("Escreva o 1° número: ");
  int n1;
  scanf("%d", &n1);
  printf("Escreva o 2° número: ");
  int n2;
  scanf("%d", &n2);

  if (n1 > n2) {
    printf("O número %d é maior que o número %d", n1, n2);
  } else if (n1 < n2) {
    printf("O número %d é maior que o número %d", n2, n1);
  } else {
    printf("Os números digitados são iguais(%d)", n1);
  }
  return 0;
}
