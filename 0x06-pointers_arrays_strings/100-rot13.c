#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @src: source string
 *
 * Return: Character of a string
 */
char *rot13(char *src)
{
	int i = 0, j;

	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (src[i] != '\0')
	{
		j = 0;

		while (alpha[j] != '\0')
		{
			if (src[i] == alpha[j])
			{
				src[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	src[i] = '\0';
	return (src);
}
