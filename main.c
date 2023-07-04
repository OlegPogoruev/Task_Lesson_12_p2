#include <stdio.h>
//#define LEN_X    3
//#define LEN_Y    3
#define SIZE_MATRIX    5

int main(void)
{
  unsigned int a[SIZE_MATRIX];
  unsigned int i, j;
  for(j = 0; j < SIZE_MATRIX; ++j)
  {
    a[j] = j + 1;
    printf("%4d", a[j]);
  }
  printf("\n");
  
  for(j = 0; j < (SIZE_MATRIX >> 1); ++j)
  {
    a[j] = a[j]^a[SIZE_MATRIX - 1 - j];
    a[SIZE_MATRIX - 1 - j] = a[j]^a[SIZE_MATRIX - 1 - j];
    a[j] = a[j]^a[SIZE_MATRIX - 1 - j];
  }
  
  for(j = 0; j < SIZE_MATRIX; ++j)
  {
    printf("%4d", a[j]);
  }
  printf("\n");

  return 0;
}
