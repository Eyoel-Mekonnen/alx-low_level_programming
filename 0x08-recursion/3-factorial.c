#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: the number
 *
 * Return: the factorial number
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
