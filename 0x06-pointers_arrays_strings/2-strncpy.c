#include "main.h"

/**
 * _strncpy - copies the string
 * @dest: destination string
 * @src: source string
 * @n: number of elements
 *
 * Return: the address of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (len < n)
		dest[i] = '\0';

	dest[i] = '\0';
	return (dest);
}
