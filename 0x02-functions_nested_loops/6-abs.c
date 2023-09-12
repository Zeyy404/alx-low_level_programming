#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: the integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i > 0 || i == 0)
		return (i);
	else
		return (-i);
}
