#include "main.h"
#include <stdio.h>
/**
 * print_number2 - prints second half
 * @num2: second part of number
 * 
 */
void print_number2(int num2)
{
	unsigned int sum2 = 0;
	int div = 10, i, count = 0, main_num = num2;

	while (num2 / div != 0)
	{
		sum2 = sum2 + num2 % div;
		if ((num2 % div == 0) && (main_num % div == 0))
		{
			count = count + 1;
		}
		sum2 = sum2 * div;
		num2 = num2 / div;
		if (num2 / div == 0)
		{
			sum2 = sum2 + num2;
			break;
		}
	}
	printf("%u - sum2 before loop\n", sum2);
	for (i = 0; sum2 / div != 0; i++)
	{
		_putchar((sum2 % div) + 48);
		sum2 = sum2 / div;
		if (sum2 / div == 0)
		{
			_putchar((sum2) + 48);
			break;
		}
	}
	if (count > 0)
	{
		_putchar(sum2 + 48);
		i = 0;
		while (i < count)
		{
			_putchar(48);
			i++;
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
		printf("%u - num1\n", num1);			
		num2 = (n % div);
		printf("%u - num2\n", num2);
	}
	else if (n > 0)
	{
		num1 = n / div;
		printf("%u - num1\n", num1);
		num2 = n % div;
		printf("%u - num2\n", num2);
		if (num1 > 0 && num2 == 0)
			print_number2(n);
	}
	else if(n == 0)
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
	if (!(num1 > 0 && num2 == 0))
		print_number2(num2);
}
