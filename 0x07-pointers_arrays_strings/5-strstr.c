#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string one
 * @needle: second string
 *
 * Return: Adress of the substring in string one
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0, len2 = 0, i, j;

	while (needle[len] != '\0')
		len++;
	while (haystack[len2] != '\0')
		len2++;

	if (len > len2)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (needle[i] == haystack[j])
				break;
		}
		if (needle[i] == haystack[j])
			break;
	}
	if (i == len)
		return (NULL);
	return (&haystack[j]);
}

