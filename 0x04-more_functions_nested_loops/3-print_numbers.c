#include "main.h"

/**
 * print_numbers - prints number from 1 to 9
 *
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
