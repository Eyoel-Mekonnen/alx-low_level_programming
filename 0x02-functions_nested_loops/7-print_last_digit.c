#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - prints the last digit
 *@n: number to be checked
 * Return: last value of digit
 */
int print_last_digit(int n)
{
	int lastnum;

	if (n < 0)
	{
		lastnum = n % 10;
		lastnum = -lastnum;
		_putchar(lastnum + 48);
	}
	else
	{
		lastnum = n % 10;
		_putchar(lastnum + 48);
	}
	return (lastnum);
}
