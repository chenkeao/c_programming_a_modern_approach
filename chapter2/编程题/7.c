#include <stdio.h>

int main(void) {
  int amount = 0, bills_20 = 0, bills_10 = 0, bills_5 = 0, bills_1 = 0;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);
  bills_20 = amount / 20;
  amount = amount - bills_20 * 20;
  printf("$20 bills: %d\n", bills_20);

  bills_10 = amount / 10;
  amount = amount - bills_10 * 10;
  printf("$10 bills: %d\n", bills_10);

  bills_5 = amount / 5;
  amount = amount - bills_5 * 5;
  printf("$5 bills: %d\n", amount / 5);
  printf("$1 bills: %d\n", amount);

  return 0;
}