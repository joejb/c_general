#include <stdio.h>

void main(void)
{
  int x;
  char y;
  float z;

  x = 5;
  y = 'a';
  z = (float) y + (float) x;
  printf("%f\n", z);
}
