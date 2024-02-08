
#include <stdio.h>
int main(void) {
  int h, m;
  scanf("%d:%d", &h, &m);
  if (h <= 12) {
    printf("%.2d:%.2d AM\n", h, m);
  } else {
    printf("%.2d:%.2d PM\n", h - 12, m);
  }
  return 0;
}