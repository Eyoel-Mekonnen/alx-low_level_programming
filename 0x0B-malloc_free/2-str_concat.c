#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in dynamically allocated mem
 * @s1: string one
 * @s2: string two
 *
 * Return: Address to the dynmically allocated ptr
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, len2 = 0, i, j = 0;
	char *ptr;

	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;
	ptr = (char *)malloc((sizeof(char) * (len + len2) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(ptr + i) = s1[i];
	}
	for (i = len; i < (len + len2); i++)
	{
		*(ptr + i) = s2[j];
		j++;
	}
	*(ptr + i) = '\0';
	if (i < len + len2)
		return (NULL);
	return (ptr);
}
