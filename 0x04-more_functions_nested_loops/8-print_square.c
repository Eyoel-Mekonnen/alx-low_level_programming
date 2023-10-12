#include "main.h"

/**
 * print_square - prints squares
 *@size: the number of sides
 *
 */
void print_square(int size)
{
	int i = 0, j;

	if (size < 0 || size == 0)
		_putchar('\n');

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
