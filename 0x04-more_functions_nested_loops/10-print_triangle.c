#include "main.h"

/**
 * print_triangle - prints triangle followed by newline
 *@size: size of the trinagle
 *
 */
void print_triangle(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			if (i + j >= size - 1)
				_putchar(35);
			else
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
