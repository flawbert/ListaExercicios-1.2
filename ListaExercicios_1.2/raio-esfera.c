#include <math.h>
#include <stdio.h>

int main() {
  printf("Insira o valor do raio da esfera: ");
  float r;
  scanf("%f", &r);

  float v = (4 / 3.0) * M_PI * pow(r, 3);

  printf(
      "O volume de uma esfera com raio de %.0f cm é de aproximadamente %.0f cm",
      r, v);

  return 0;
}