#include "stdio.h"

int main(void) {
  int num = 0;
  scanf("%d", &num);
  if (num < 10) {
    printf("1\n");
  } else if (num < 100) {
    printf("2\n");
  } else if (num < 1000) {
    printf("3\n");
  } else {
    printf("4\n");
  }
  return 0;
}