#include <stdio.h>

int main(void) {
  int y = 0, m = 0, d = 0;
  scanf("%d/%d/%d", &m, &d, &y);
  printf("%d%.2d%.2d\n", y, m, d);
  return 0;
}