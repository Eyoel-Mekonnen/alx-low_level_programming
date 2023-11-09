#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all inputs
 * @n: the number of arguments
 *
 * Return: sum of all number
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, sum = 0;
	va_list count;

	va_start(count, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		num = va_arg(count, int);
		sum = num + sum;
	}
	va_end(count);
	return (sum);

}
