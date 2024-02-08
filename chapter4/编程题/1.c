#include <stdio.h>
int main(void) {
  int i = 0;
  scanf("%2d", &i);
  printf("%d%d\n", i % 10, i / 10);
  return 0;
}