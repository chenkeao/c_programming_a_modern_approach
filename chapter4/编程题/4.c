#include <stdio.h>
int main(void) {
  int i = 0;
  scanf("%d", &i);
  int a = i % 8;
  int b = i / 8 % 8;
  int c = i / 8 / 8 % 8;
  int d = i / 8 / 8 / 8 % 8;
  int e = i / 8 / 8 / 8 / 8 % 8;
  printf("%d%d%d%d%d\n", e, d, c, b, a);
  return 0;
}

// #include <stdio.h>
// int main(void) {
//   int i = 0;
//   scanf("%d", &i);
//   printf("%.5o\n", i);
//   return 0;
// }