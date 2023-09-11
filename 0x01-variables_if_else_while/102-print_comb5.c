#include <stdio.h>

/**
 * main - prints all combinations of two two-digit number, no repetition
 * Return: 0 and exist program
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i < 58)
	{
		j = i;
		while (j < 58)
		{
			putchar((char)i);
			putchar((char)j);
			putchar(32);
			j++;
			putchar((char)i);
			putchar((char)j);
		}
		i++;
		if (i != 57 && j != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
