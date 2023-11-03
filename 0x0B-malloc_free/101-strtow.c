#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits strings into words
 * @str: the string
 *
 * Return: pointer to dynamic memory
 */
char **strtow(char *str)
{
	int i = 0, count = 0, len = 0, wordcount = 0, setter = 0, j = 0;
	char **ptr;

	while (str[len] != '\0')
		len++;
	while (i < len - 1)
	{
		if (str[i] == 32)
			i++;
		if (str[i] != 32)
		{
			while (str[i] != 32)
			{
				i++;
				if (str[i] == 32)
				{
					count++;
					break;
				}
			}
		}
		i++;
	}
	ptr = (char **)malloc(sizeof(char *) * count);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		if (str[i] == ' ')
			i++;
		if (str[i] != ' ')
		{
			wordcount = 0;
			setter = 0;
			while (str[i] != ' ')
			{
				wordcount++;
				i++;
			}
			*(ptr + j) = (char *)malloc(wordcount * sizeof(char) + 1);
			while (wordcount)
			{
				(*(*(ptr + j) + setter)) = str[i - wordcount];
				wordcount--;
				setter++;
			}
			*(*(ptr + j) + setter) = '\0';
			j++;
		}
	}
	return (ptr);
}
