#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
