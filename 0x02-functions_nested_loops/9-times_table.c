#include "main.h"

/**
 * times_table - prints 9x9 table
 *
 */

void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (i * j > 9)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + 48);
				_putchar(((i * j) % 10) + 48);
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + 48);
			}
			if (i == 9 && j == 9)
				break;
			if (j <= 8)
				_putchar(',');
			j++;

		}
		_putchar('\n');
		i++;

	}
}
