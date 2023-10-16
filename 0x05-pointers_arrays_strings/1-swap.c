#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: first number
 * @b: Second number
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
