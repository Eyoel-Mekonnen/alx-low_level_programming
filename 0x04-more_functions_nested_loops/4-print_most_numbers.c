#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 without 2 and 4
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 9)
			_putchar(i + 48);
	i++;
	}
	_putchar('\n');
}