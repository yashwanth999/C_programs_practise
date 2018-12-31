#include <stdio.h>       
 
unsigned int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    printf("value of count is %d\n", count);
    n >>= 1;
  }
  return count;
}
 
int main()
{
    int i = 5;
    printf("%d\n", countSetBits(i));
    return 0;
}
