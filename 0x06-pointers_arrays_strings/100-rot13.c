#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @src: source string
 *
 * Return: Character of a string
 */
char *rot13(char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len;  i++)
	{
		if (((src[i] >= 'a') && (src[i] <= 'm')) ||
				((src[i] >= 'A') && (src[i] <= 'M')))
			src[i] = src[i] + 13;
		else if (((src[i] >= 'n') && (src[i] <= 'z')) ||
				((src[i] >= 'N') && (src[i] <= 'Z')))
			src[i] = src[i] - 13;
	}
	src[i] = '\0';
	return (src);
}
