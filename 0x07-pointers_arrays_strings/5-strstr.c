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
	int i, j, address;
	int len = 0, len2 = 0;

	while (needle[len] != '\0')
		len++;
	while (haystack[len2] != '\0')
		len2++;
	if (len > len2)
		return (0);
	if (*needle == '\0')
		return (haystack);
	if (*haystack == '\0')
		return (needle);
	
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				address = j;
				while ((needle[i] == haystack[j]))
				{
					i++;
					j++;
				}
				if (needle[i] == '\0')
					return (&haystack[address]);
				if (needle[i] != haystack[j] && needle[i] != '\0')
				{
					i = 0;
					continue;
				}
			}
		}
	}
	return (0);
}


