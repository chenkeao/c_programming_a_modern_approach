#include <stdio.h>

int main(void) {
  float num, max;
  scanf("%f", &num);
  max = num;
  while (num > 0) {
    scanf("%f", &num);
    if (num > max) {
      max = num;
    }
  }
  printf("%.2f\n", max);
  return 0;
}