#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = 2, j = i * i; j <= n; i++, j = i * i) {
    if (j % 2 == 0) {
      printf("%d\n", j);
    }
  }
  return 0;
}