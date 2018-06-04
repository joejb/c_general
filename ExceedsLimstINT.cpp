#include <limits.h>
#include <stdio.h>

void main(void)
{
  int number, i;

  number = INT_MAX - 10;
  i = 0;
  while(i<=20)
  {
      printf("%d\n", number);
      number++;
      i++;
  }
}
