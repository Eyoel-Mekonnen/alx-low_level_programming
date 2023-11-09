#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints number of arguments
 * @separator: separating character
 * @n: number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list count;

	va_start(count, n);
	if (n == 0)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		num = va_arg(count, int);
		printf("%d", num);
		if (i == n - 1)
			break;
		if (separator == NULL)
			continue;
		printf("%c ", separator[0]);
	}
	printf("\n");
	va_end(count);
}
