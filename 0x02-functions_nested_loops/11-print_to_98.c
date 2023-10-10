#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - prints number up to 98
 *
 * @n: recives the number
 */
void print_to_98(int n)
{
	while (n <= 98 || n >= 98)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(",");
		printf(" ");
		if (n <= 98)
			n++;
		else if (n >= 98)
			n--;

	}
	printf("\n");
}
