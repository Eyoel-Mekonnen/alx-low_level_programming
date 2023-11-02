#include "main.h"
#include <stdlib.h>

/**
 * *array_range - returns an address of dynamically allocated memory
 * @min: the min number passed
 * @max: the max number passed
 *
 * Return: address of the memory allocated
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);
}
