#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main -display "and that piece of art is useful" - Dora Korper, 2015-10-19"
 * Return: 1 and exit the program
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";
write(STDOUT_FILENO, message, strlen(message));

return (1);
}
