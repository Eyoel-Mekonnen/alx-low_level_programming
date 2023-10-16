#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array of integers
 * @a: the array
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == 4)
			break;
		printf(", ");
	}
	printf("\n");
}
