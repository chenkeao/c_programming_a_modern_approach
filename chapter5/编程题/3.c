/* Calculates a broker's commission */
#include <stdio.h>

int main(void) {
  int count, rival_count;
  float commission, value, amount;

  printf("Enter value of count: ");
  scanf("%d", &count);
  printf("Enter value of value: ");
  scanf("%f", &value);
  printf("Enter value of rival's count: ");
  scanf("%d", &rival_count);

  amount = (float)count * value;

  if (amount < 2500.00f)
    commission = 30.00f + .017f * amount;
  else if (amount < 6250.00f)
    commission = 56.00f + .0066f * amount;
  else if (amount < 20000.00f)
    commission = 76.00f + .0034f * amount;
  else if (amount < 50000.00f)
    commission = 100.00f + .0022f * amount;
  else if (amount < 500000.00f)
    commission = 155.00f + .0011f * amount;
  else
    commission = 255.00f + .0009f * amount;

  if (commission < 39.00f)
    commission = 39.00f;
  printf("Commission: $%.2f\n", commission);

  // 原题的描述为：少于 2000 股时佣金为每股 33 美元+3 美分, 2000
  // 股或更多股时佣金为每股 33 美元+2 美分。但是这样计算似乎有些太高了
  if (rival_count < 2000) {
    printf("$%.2f\n", (33.0f + .003) * rival_count);
  } else {
    printf("$%.2f\n", (33.0f + .002) * rival_count);
  }

  return 0;
}