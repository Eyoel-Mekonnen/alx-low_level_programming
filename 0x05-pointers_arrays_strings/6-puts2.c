#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string
 *
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	while (i < (len - 1))
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
