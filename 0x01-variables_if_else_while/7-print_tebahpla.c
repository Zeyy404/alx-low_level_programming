#include <stdio.h>

/**
 * main - print the alphabet in lowercse in reverse order
 * Return: 0 and exit the program
 */
int main(void)
{
  char c;

  c = 122;
  while (c < 96)
    putchar((char)c), c++;
  putchar('\n');

  return (0);
}
