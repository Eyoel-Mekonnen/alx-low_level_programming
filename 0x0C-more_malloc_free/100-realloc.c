#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory like realloc
 * @ptr: pointer to the allocated memory
 * @old_size: the old size of the dynamically allocated memory
 * @new_size: the new size of the dynamically allocated memory
 *
 * Return: adress of newly allocated dynamic memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2, *previous;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		free(ptr);
		return (ptr2);
	}
		ptr2 = malloc(new_size);
		previous = ptr;
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*(ptr2 + i) = *(previous + i);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*(ptr2 + i) = *(previous + i);
	}
	previous = NULL;
	free(ptr);
	return (ptr2);
}
