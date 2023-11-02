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
	int i = 0, count = 0, setter, j = 0, wordcount;
	char **ptr;	

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				i++;
				if (str[i] == ' ')
				{
					count++;
					break;
				}
			}
		}
		i++;
	}
	printf("%d\n", count);
	ptr = (char **)malloc(sizeof(char *) * count);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
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
				*(*(ptr + j) + setter) = str[i - wordcount];
				 wordcount--;
				 setter++;
			}
			*(*(ptr + j) + setter) = '\0';
		}

	}
	return (ptr);
	
	
}
