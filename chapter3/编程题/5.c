#include <stdio.h>
int main(void) {
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e,
        &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
  printf("%.2d %.2d %.2d %.2d\n", a, b, c, d);
  printf("%.2d %.2d %.2d %.2d\n", e, f, g, h);
  printf("%.2d %.2d %.2d %.2d\n", i, j, k, l);
  printf("%.2d %.2d %.2d %.2d\n", m, n, o, p);

  printf("row: %d %d %d %d\n", a + b + c + d, e + f + g + h, i + j + k + l,
         m + n + o + p);
  // more...
  return 0;
}