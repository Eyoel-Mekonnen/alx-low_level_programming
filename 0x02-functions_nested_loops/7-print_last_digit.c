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
	if (n < 0)
		n = -1 * n;

	return (n % 10);
}
