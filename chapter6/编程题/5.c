#include <stdio.h>
int main(void) {
  int i = 0;
  scanf("%d", &i);

  do {
    printf("%d", i % 10);
    i /= 10;
  } while (i != 0);

  return 0;
}