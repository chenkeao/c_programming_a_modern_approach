#include <stdio.h>
int main(void) {
  float current_loan = 0, interest_rate = 0, monthly_payment = 0, factor = 0;
  int times = 0;

  printf("Enter amount of loan:");
  scanf("%f", &current_loan);
  printf("Enter interest rate:");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment:");
  scanf("%f", &monthly_payment);
  printf("Enter payment times:");
  scanf("%d", &times);

  factor = 1 + interest_rate / 100 / 12;

  for (int i = 0; i < times; i++) {
    current_loan = current_loan * factor - monthly_payment;
    printf("Balance remaining after %d payment: $%.2f\n", i + 1, current_loan);
  }
  return 0;
}