#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alpha ten times
 *
 */
void print_alphabet_x10(void)
{
	int n = 10;
	char c;

	while (n > 0)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n--;
	}
}
