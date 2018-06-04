#include <float.h>
#include <stdio.h>

void main(void)
{
  float x;
  int i;

  x = 1.0;
  i = 0;

  while (i<1000)
  {
      printf("x = %f\n", x);
      x = x + 0.001;
      i++;
  }
}
