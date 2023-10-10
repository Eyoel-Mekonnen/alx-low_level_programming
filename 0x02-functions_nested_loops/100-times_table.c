#include "main.h"

/**
 * con1 - prints space
 *
 */
void con1(void)
{
	_putchar(' ');
	_putchar(' ');
}
/**
 * con2 - prints space
 *
 */
void con2(void)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
/**
 * con3 - prints second condition
 *@i: row and column
 *@j: row and column
 */
void con3(int i, int j)
{
	_putchar(' ');
	_putchar(((i * j) / 100) + 48);
	_putchar((((i * j) % 100) / 10) + 48);
	_putchar(((i * j) % 10) + 48);
}
/**
 * print_times_table - prints table
 *
 *@n: number of table to print
 *
 */
void print_times_table(int n)
{
	int i = 0, j;

	if (n > 0 && n < 15)
	{
		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				if (i * j > 9 && i * j < 100)
				{
					con1();
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else if (i * j >= 100)
				{
					con3(i, j);
				}
				else
				{
					if (j > 0)
					{
						con2();
					}
					_putchar((i * j) + 48);
				}
				if (i == n && j == n)
					break;
				if (j <= (n - 1))
					_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else if (n <= 0 || n > 15) 
		return;
}
