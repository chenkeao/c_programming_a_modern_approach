#include <stdio.h>

int main(void) {
  int days, start;
  scanf("%d", &days);
  scanf("%d", &start);

  for (int j = 1; j < start; j++) {
    printf("   ");
  }
  for (int i = 1; i <= days; i++) {
    printf("%2d ", i);

    if ((i + start - 1) % 7 == 0) {
      printf("\n");
    }
  }
  return 0;
}