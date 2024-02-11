#include <stdio.h>

int main(void) {
  int n, m;

  scanf("%d %d", &n, &m);
  while (n != 0) {
    int r = m % n;
    m = n;
    n = r;
  }

  printf("%d\n", m);
  
  return 0;
}