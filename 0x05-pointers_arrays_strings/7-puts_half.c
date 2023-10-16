#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the string
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int size;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		size = (len / 2) + 1;
	else
		size = len / 2;
	for (i = size; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
