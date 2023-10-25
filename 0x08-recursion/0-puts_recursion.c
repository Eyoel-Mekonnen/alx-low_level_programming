#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - prints a sting followed by a new line
 * @s: the string it recieves
 *
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s++));
		_puts_recursion(s);
	}

}
