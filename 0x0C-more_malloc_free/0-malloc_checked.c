#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: the number of int that will be stored
 *
 * Return: Adress of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
