// Program akar persamaan kuadrat
#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, x1, x2, d;
  printf("Masukkan nilai a = ");
  scanf("%f", &a);
  printf("Masukkan nilai b = ");
  scanf("%f", &b);
  printf("Masukkan nilai c = ");
  scanf("%f", &c);

  d = ( pow(b , 2)) - (4 * a * c);
  printf ("%.2f \n" , d);

  if (d < 0) {
    printf("Akar imajiner!");
  } else{
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
  }
  return 0;
}
