#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to it
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
						break;
			case 'i':
				printf("%d", va_arg(ptr, int));
					break;
			case 'f':
				printf("%f", va_arg(ptr, double));
					break;
			case 's':
					if (va_arg(ptr, char *) == NULL)
						printf("(nil)\n");
				printf("%s", va_arg(ptr, char *));
					break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] == '\0')
			break;
		printf(", ");
		i++;
	}
	printf("\n");
}

