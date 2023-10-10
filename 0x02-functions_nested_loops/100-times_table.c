#include "main.h"

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
				if(i * j > 9 && i * j < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else if (i * j >= 100)
				{
					_putchar(' ');
					_putchar(((i * j) / 100) + 48);
					_putchar((((i * j) % 100) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
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
}
