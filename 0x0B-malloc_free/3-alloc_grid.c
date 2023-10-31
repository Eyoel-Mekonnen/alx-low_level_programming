#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2D array
 * @width: width/ column
 * @height: height/ row
 *
 * Return: Address of pointer which is going to be a pointer to pointer
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(ptr + i) + j) = 0;
	}
	return (ptr);
}

