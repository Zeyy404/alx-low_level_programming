#include <stdio.h>

/**
 * main - print all possible different combination of two digits, no repetition
 * Return: 0 and exit the program
 */
int main(void)
{
	int i;
	int j;

	i = 48;
		while (i < 57)
		{
			j = i;
			while (j < 58)
			{
				if (i != j)
				{
					putchar((char)i);
					putchar((char)j);
					if (i != 56)
					  {
						putchar(44);
						putchar(32);
					  }
				}
				j++;
			}
			i++;
		}
	putchar('\n');
	return (0);
}
