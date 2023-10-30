#include "main.h"
#include <stdlib.h>

/**
 * create_array - dynamically allocates array of chars
 * @size: size of memory to allocate
 * @c: the character to intialized it with
 *
 * Return: address of dynamic memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc((sizeof(char) * size) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
