#include <stdio.h>

int main(void) {
  float amount = 0;
  scanf("%f", &amount);

  printf("Enter an amount: %.2f\n", amount);
  printf("With tax added: $%.2f\n", amount * 1.05);
  return 0;
}