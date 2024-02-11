#include <stdio.h>

int main(void) {
  float r;
  scanf("%f", &r);

  float current = 1.0f;
  float e = 1.0f;

  for (int i = 1; current > r; i++) {
    int factorial = 1;
    for (int j = 2; j <= i; j++) {
      factorial *= j;
    }

    e += current = 1.0f / (float)factorial;
  }

  printf("%f\n", e);
  return 0;
}
