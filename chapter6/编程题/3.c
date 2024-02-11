#include <stdio.h>
int main(void) {
  int numerator, denominator;
  scanf("%d/%d", &numerator, &denominator);
  int n = numerator, m = denominator;

  while (n != 0) {
    int r = m % n;
    m = n;
    n = r;
  }

  printf("%d/%d\n", numerator / m, denominator / m);

  return 0;
}