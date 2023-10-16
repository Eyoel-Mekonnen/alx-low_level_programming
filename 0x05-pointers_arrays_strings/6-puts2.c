#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 92)
			break;
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
