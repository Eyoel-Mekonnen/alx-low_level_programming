#include "main.h"

/**
 * more_numbers - prints form 0 -14
 *
 */
void more_numbers(void)
{
	int i, k = 0, j;

	while (k < 10)
	{
		i = 0;
		while (i <= 1)
		{
			j = 0;
			while (j <= 9)
			{
				if (i == 1)
				{
					_putchar(i + 48);
				}
				_putchar(j + 48);
				if (i == 1 && j == 4)
					break;
				j++;
			}
			i++;
		}
		_putchar('\n');
		k++;
	}
}
