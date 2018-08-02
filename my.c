#include <stdio.h>
#include <limits.h>

#define CLINTMAXDIGIT 5

typedef unsigned short CLINT[CLINTMAXDIGIT +1];

int main()
{
  unsigned short lus_n;

  lus_n = 0;

  printf("now im here!!\n");
  printf("Eine Zahl: %u\n", 55000);
  printf("Eine Zahl: %#08x\n", 55000);
  printf("\n");
  printf("UCHAR_MAX: %#08x\n", UCHAR_MAX);
  printf("USHRT_MAX: %#08x\n", USHRT_MAX);
  printf("UINT_MAX : %#015x\n", UINT_MAX);
  printf("ULONG_MAX: %#15lX\n", ULONG_MAX);

  CLINT n;

  printf("SizeOf CLINT %lu\n", sizeof(lus_n));
  printf("SizeOf CLINT %lu\n", sizeof(n));


  return 0;
}
