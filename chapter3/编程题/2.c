#include <stdio.h>

int main(void) {
  int item_number = 0, y = 0, m = 0, d = 0;
  float price = 0;
  printf("Enter item number:");
  scanf("%d", &item_number);
  printf("Enter unit price:");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf("%d/%d/%d", &d, &m, &y);
  printf("Item\tUnit Price\tPurchase Date\n%d\t%.2f\t%.2d/%.2d/%.2d\n",
         item_number, price, d, m, y);
  return 0;
}