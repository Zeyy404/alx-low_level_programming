#include <stdio.h>

int main(void)
{
  int i;
  long int l;
  long long int k;
  float f;
  char c;

  printf("Size of int: %lu\n", (unsigned long)sizeof(i));
  printf("Size of long int: %lu\n", (unsigned long)sizeof(l));
  printf("Size of long long int: %lu\n", (unsigned long)sizeof(k));
  printf("Size of float: %lu\n", (unsigned long)sizeof(f));
  printf("Size of char: %lu\n", (unsigned long)sizeof(c));

  return(0);
}
