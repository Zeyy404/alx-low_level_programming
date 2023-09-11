#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 99 || j != 99)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return 0;
}
