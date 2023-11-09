#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - prints strings followed by a new line
 * @separator: separates strings
 * @n: number of argument
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list count;
	char *str;

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(count, char *);
		if (str == NULL)
		{
			printf("nil");
			break;
		}
		printf("%s", str);
		if (i == n - 1)
			break;
		if (separator == NULL)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}
