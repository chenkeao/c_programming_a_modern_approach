#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  float e = 1.0f;
  for (int i = 1; i <= n; i++) {
    int factorial = 1;
    for (int j = 2; j <= i; j++) {
      factorial *= j;
    }
    e += 1.0f / (float)factorial;
  }
  printf("%f\n", e);
  return 0;
}