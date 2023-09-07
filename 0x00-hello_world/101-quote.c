#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main -display "and that piece of art is useful" - Dora Korper, 2015-10-19"
 * Return: 1 and exit the program
 */
int main(void)
{
const char *msg = "and that piece of art is useful\" - Dora Korper, 2015-10-19";
write(STDOUT_FILENO, msg, strlen(msg));

return (1);
}
