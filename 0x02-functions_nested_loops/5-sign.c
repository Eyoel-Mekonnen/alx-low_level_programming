#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of a number
 *@n: recieves the number
 *
 * Return: 1 if positve, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
