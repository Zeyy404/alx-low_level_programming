#include <stdio.h>

/**
 * main - prints all different combinations of three digits, no repetition
 * Return: 0 and exit the program
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i < 56)
	{
		j = i + 1;
		while (j < 57)
		{
			k = j + 1;
			while (k < 58)
			{
				if (k != j)
				{
					putchar((char)i);
					putchar((char)j);
					putchar((char)k);
					if (i != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
