#include "main.h"

/**
 * _pow_recursion - return x raised to y
 *@x: the base number
 *@y: the power number
 *
 * Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
	{
		return( x * y);
	}
	return (x * _pow_recursion(x, y - 1));
}
