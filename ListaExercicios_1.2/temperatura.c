#include <stdio.h>

int main() {
  printf("Insira a temperatura em Celsius: ");
  double temperatura;
  scanf("%lf", &temperatura);

  double fahrenheit = (temperatura * 1.8) + 32;

  printf("%.0lf°C = %.1lf°F", temperatura, fahrenheit);

  return 0;
}
