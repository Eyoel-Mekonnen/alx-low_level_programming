#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates a memory for a copy of passed string
 * @str: the string that is passed
 *
 * Return: address of allocated memory
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr = (char *)malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(ptr + i) = str[i];
	}
	if (i < len)
		return (NULL);
	return (ptr);

}

