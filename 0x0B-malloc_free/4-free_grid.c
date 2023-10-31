#include "main.h"
#include <stdlib.h>

/**
 * free_grid - allocates 2d array
 * @grid: pointer of dynamic memory
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
