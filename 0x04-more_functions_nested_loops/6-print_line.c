#include "main.h"

/**
 * print_line - prints line
 * @n: accepts the number of time to be drawn
 *
 */
void print_line(int n)
{
	if (n < 0 || n == 0)
		_putchar('\n');

	while (n > 0)
	{
		_putchar('_');
		n--;
		if (n == 0)
			_putchar('\n');
	}
}
