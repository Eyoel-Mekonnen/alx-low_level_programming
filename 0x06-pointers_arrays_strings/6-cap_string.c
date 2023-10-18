#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @src: string that is passed
 *
 * Return: Address of string
 */
char *cap_string(char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if ((i == 0) && (src[i] >= 'a' && src[i] <= 'z'))
			src[i] = src[i] - 32;

		if (src[i] == ' ' || src[i] == '\t' || src[i] == '\n' || src[i] == ','
				|| src[i] ==  ';' || src[i] == '.'
				|| src[i] == '!' || src[i] == '?' || src[i] == '"'
				|| src[i] == '(' || src[i] == ')'
				|| src[i] == '{' ||  src[i] == '}')
		{
			if (src[i + 1] >= 97 && src[i + 1]  <= 122)
				src[i + 1] = src[i + 1] - 32;
		}
	}
	return (src);

}
