#include <math.h>
#include <stdio.h>

int main() {
  printf("Insira o valor de (a) da equação: ");
  float a;
  scanf("%f", &a);

  printf("Insira o valor de (b) da equação: ");
  float b;
  scanf("%f", &b);

  printf("Insira o valor de (c) da equação: ");
  float c;
  scanf("%f", &c);

  float delta = pow(b, 2) - 4 * a * c;
  float x1 = (-b + sqrt(delta)) / (2 * a);
  float x2 = (-b - sqrt(delta)) / (2 * a);

  if (delta == 0) {
    printf("A equação %.0fx²+%.0fx+%.0f possui apenas uma raiz real: x = %.0f",
           a, b, c, x1);
  } else if (delta > 0) {
    printf("As raízes da equação %.0fx²+%.0fx+%.0f são: x1 = %.0f e x2 = %.0f",
           a, b, c, x1, x2);
  } else {
    printf("A equação %.0fx²+%.0fx+%.0f não possui raízes reais");
  }

  return 0;
}