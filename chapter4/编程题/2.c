#include <stdio.h>

int main(void) {
  int i = 0;
  scanf("%3d", &i);
  printf("%d%d%d\n", i % 10, i / 10 % 10, i / 10 / 10);
  return 0;
}