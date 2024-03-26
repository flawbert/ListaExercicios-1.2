#include <stdio.h>

int main() {
  printf("Insira três números inteiros abaixo: ");
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);

  double media = (n1 + n2 + n3) / 3;

  printf("Média: %.1f\n", media);

  if (n1 > n2 && n1 > n3) {
    printf("Maior: %d\n", n1);
  } else if (n2 > n1 && n2 > n3) {
    printf("Maior: %d\n", n2);
  } else {
    printf("Maior: %d\n", n3);
  }
  if (n1 < n2 && n1 < n3) {
    printf("Menor: %d\n", n1);
  } else if (n2 < n1 && n2 < n3) {
    printf("Menor: %d\n", n2);
  } else {
    printf("Menor: %d\n", n3);
  }

  return 0;
}