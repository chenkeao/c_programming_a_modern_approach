#include <stdio.h>
int main(void) {
  float x = 0;
  scanf("%f", &x);
  printf("((((3x + 2) x - 5)x - 1)x + 7)x - 6 = %.2f\n",
         ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
  return 0;
}