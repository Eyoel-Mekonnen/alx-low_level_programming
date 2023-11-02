#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate contiguos memory of blocks
 * @nmemb: array passed
 * @size: size of each block of memory
 *
 * Return: Always address of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
