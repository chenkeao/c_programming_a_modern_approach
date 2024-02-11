#include <stdio.h>
int main(void) {
  float speed;
  scanf("%f", &speed);

  if (speed < 1.0f) {
    printf("Calm\n");
  } else if (speed < 3.0f) {
    printf("Light air");
  } else if (speed < 27.0f) {
    printf("Breeze\n");
  } else if (speed < 47.0f) {
    printf("Gale\n");
  } else if (speed < 63.0f) {
    printf("Storm\n");
  } else {
    printf("Hurricane\n");
  }
  return 0;
}