#include <stdio.h>

int main(void) {
    
  float r = 0, factor = 4.0f / 3.0f;
  scanf("%f", &r);
  printf("%.2fPi\n", r * r * r * factor);

  return 0;
}