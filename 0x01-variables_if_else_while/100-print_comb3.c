#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 * Return: 0 and exit the program
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 49;
	while (i < 57 && j < 58)
	  {
		putchar((char)i);
		putchar((char)j);
		putchar(44);
		putchar(32);
		i++;
		j++;
	  }
	putchar('\n');
  	return (0);
}
