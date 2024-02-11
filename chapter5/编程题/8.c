#include "stdio.h"

int main(void) {
  int h, m, time;

  int t1, t2, t3, t4, t5, t6, t7, t8;
  t1 = 8 * 60;
  t2 = 9 * 60 + 43;
  t3 = 11 * 60 + 19;
  t4 = 12 * 60 + 47;
  t5 = 14 * 60;
  t6 = 15 * 60 + 45;
  t7 = 19 * 60;
  t8 = 21 * 60 + 45;

  scanf("%d:%d", &h, &m);
  time = h * 60 + m;

  if (time < t1) {
    printf("8:00\n");
  } else if (time < t2) {
    printf("9:43\n");
  } else if (time < t3) {
    printf("11:19\n");
  } else if (time < t4) {
    printf("12:47\n");
  }

  // ...

  return 0;
}