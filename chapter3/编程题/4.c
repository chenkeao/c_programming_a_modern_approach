#include <stdio.h>
int main(void) {
  int left, center, right;
  scanf("(%d) %d-%d", &left, &center, &right);
  printf("%d.%d.%d\n()", left, center, right);
  return 0;
}