#include "main.h"
#include <stdio.h>
/**
 * print_number2 - prints second half
 * @num2: second part of number
 *
 */
void print_number2(int num2)
{
	unsigned int sum2 = 0, i;

	while (num2 / 10 != 0)
	{
		sum2 = sum2 + num2 % 10;
		sum2 = sum2 * 10;
		num2 = num2 / 10;
		if (num2 / 10 == 0)
		{
			sum2 = sum2 + num2;
			break;
		}
	}
	for (i = 0; sum2 / 10 != 0; i++)
	{
		_putchar((sum2 % 10) + 48);
		sum2 = sum2 / 10;
		if (sum2 / 10 == 0)
		{
			_putchar((sum2) + 48);
			break;
		}
	}
}
/**
 * print_number - prints number
 * @n: the number passed
 *
 */
void print_number(int n)
{
	unsigned int sum1 = 0, i, num1, num2, div = 10000;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		num1 = (n / div);
		num2 = (n % div);
	}
	else
	{
		num1 = n / 10000;
		num2 = n % 10000;
	}

	if (n == 0)
		_putchar(n + 48);
	while (num1 / 10 != 0)
	{
		sum1 = sum1 + num1 % 10;
		sum1 = sum1 * 10;
		num1 = num1 / 10;
		if (num1 / 10 == 0)
		{
			sum1 = sum1 + num1;
			break;
		}
	}
	for (i = 0; sum1 / 10 != 0; i++)
	{
		_putchar((sum1 % 10) + 48);
		sum1 = sum1 / 10;
		if (sum1 / 10 == 0)
		{
			_putchar((sum1) + 48);
			break;
		}
	}
	print_number2(num2);

}
