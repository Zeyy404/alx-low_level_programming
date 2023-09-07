#include <stdio.h>

/**
 *main - display the size of various data types on the computer
 *Return: 0 and exit the program
 */

int main(void)
{
int i;
long int l;
long long int k;
float f;
char c;

printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));

return (0);
}
