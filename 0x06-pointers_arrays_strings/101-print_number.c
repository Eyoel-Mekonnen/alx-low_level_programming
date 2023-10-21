#include "main.h"
#include <stdio.h>
/**
 * print_number - prints number
 * @n: the number passed
 *
 */
void print_number(int n)
{
	unsigned int sum = 0, i;
	 int num = n;

	if (n < 0)
		num = -1 * n;

	if (n == 0)
		_putchar(n + 48);
	while (num / 10 != 0)
	{
		sum = sum + num % 10;
		sum = sum * 10;
		num = num / 10;
		if (num / 10 == 0)
		{
			sum = sum + num;
			break;
		}
	}
	for (i = 0; sum / 10; i++)
	{
		if (n < 0 && i == 0)
			_putchar('-');
		_putchar((sum % 10) + 48);
		sum = sum / 10;
		if (sum / 10 == 0)
		{
			_putchar((sum) + 48);
		}
	}
}
