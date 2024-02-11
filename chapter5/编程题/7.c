#include <stdio.h>

int main(void) {

  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int max1, min1, max2, min2;

  if (a > b) {
    max1 = a;
    min1 = b;
  } else {
    max1 = b;
    min1 = a;
  }

  if (c > d) {
    max2 = c;
    min2 = d;
  } else {
    max2 = d;
    min2 = c;
  }

  if (max1 > max2) {
    printf("max:%d\n", max1);
  } else {
    printf("max:%d\n", max2);
  }

  if (min1 < min2) {
    printf("min: %d\n", min1);
  } else {
    printf("min: %d\n", min2);
  }

  return 0;
}