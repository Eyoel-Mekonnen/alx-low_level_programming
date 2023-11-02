#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the number of bytes from s2 to be copies
 *
 * Return: Adress of dynamically allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	ptr = malloc((sizeof(char) * n) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];
	for (j = 0; j < n; j++)
	{
		*(ptr + i) = s2[j];
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);

}
