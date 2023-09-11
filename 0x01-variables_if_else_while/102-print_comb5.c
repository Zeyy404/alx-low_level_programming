#include <stdio.h>

/**
 * main - prints all combinations of two two-digit number, no repetition
 * Return: 0 and exist program
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			while (k < 58)
			{
				l = j + 1;
				while (l < 58)
				{
					putchar((char)i);
					putchar((char)j);
					putchar(32);
					putchar((char)k);
					putchar((char)l);
					l++;
					if (l > j)
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
