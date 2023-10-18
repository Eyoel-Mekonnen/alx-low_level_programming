#include "main.h"

/**
 * leet - encodes a string
 * @src: string passed
 *
 * Return: address of the modified string
 */
char *leet(char *src)
{
	int i = 0, j;

	char alphabets[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (src[i] != '\0')
	{
		j = 0;

		while (alphabets[j] != '\0')
		{
			if (src[i] == alphabets[j])
			{
				src[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (src);
}
