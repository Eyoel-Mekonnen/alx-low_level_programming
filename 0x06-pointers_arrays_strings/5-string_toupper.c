#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @src: the source string
 *
 * Return: address of the string
 */
char *string_toupper(char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (src[i] >= 97 && src[i] <= 122)
			src[i] = src[i] - 32;
	}
	return (src);
}
