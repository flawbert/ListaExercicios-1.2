#include <math.h>
#include <stdio.h>

int main() {
  printf("Insira a altura (h), a velocidade inicial (V0) e o ângulo (α) do "
         "projétil: ");
  float h, v0, alpha;
  scanf("%f %f %f", &h, &v0, &alpha);

  float g = 9.80665;
  float pi = 3.14159;
  float alpha_rad = alpha * (pi / 180);

  float d = ((v0 * cos(alpha_rad) / g) *
             (v0 * sin(alpha_rad) +
              sqrt(pow(v0, 2) * pow(sin(alpha_rad), 2) + 2 * g * h)));

  printf("d = %.5f", d);

  return 0;
}