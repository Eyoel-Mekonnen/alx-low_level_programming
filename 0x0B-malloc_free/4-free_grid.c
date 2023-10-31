#include "main.h"
#include <stdlib.h>

/**
 * free_grid - allocates 2d array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: Return addres to the pointer
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
