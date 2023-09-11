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
		k = 48;
		while (k < 58)
		{
			l = 48;
			while (l < 58)
			{
				putchar((char)i);
				putchar((char)j);
				putchar(32);
				putchar((char)k);
				putchar((char)l);
				l++;
				if (i != 57 && j != 57)
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
