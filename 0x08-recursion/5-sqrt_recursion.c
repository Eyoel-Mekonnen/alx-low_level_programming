#include "main.h"

/**
 * _recursion_2 - finds the base number
 * @n: the original number
 * @base: the base that will iteratre
 *
 * Return: return the natural square root
 */
int _recursion_2(int n, int base)
{
	if (base * base != n)
		base++;
	if (base * base == n)
		return (base);
	if (base * base > n)
		return (-1);
	return (_recursion_2(n, base));
}

/**
 * _sqrt_recursion - checks for natural square root
 * @n: the number that is passed
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_recursion_2(n, 1));
}
