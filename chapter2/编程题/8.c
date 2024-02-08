#include <stdio.h>
int main(void) {
  float current_loan = 0, interest_rate = 0, monthly_payment = 0, factor = 0;

  printf("Enter amount of loan:");
  scanf("%f", &current_loan);
  printf("Enter interest rate:");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment:");
  scanf("%f", &monthly_payment);

  factor = 1 + interest_rate / 100 / 12;

  current_loan = current_loan * factor - monthly_payment;
  printf("Balance remaining after first payment: $%.2f\n", current_loan);

  current_loan = current_loan * factor - monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", current_loan);

  current_loan = current_loan * factor - monthly_payment;
  printf("Balance remaining after third payment: $%.2f\n", current_loan);

  return 0;
}