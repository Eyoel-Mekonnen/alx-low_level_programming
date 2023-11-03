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
	int i = 0, count = 0, len = 0, wordcount, setter, j = 0,flag;
	char **ptr;
	
	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[len] != '\0')
		len++;
	while (i < len - 1)
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] != ' ' || str[i] != '\0')
		{
			while (str[i] != ' ' || str[i] != '\0')
			{
				if (str[i] == ' ' || str[i] == '\0')
				{
					count++;
					break;
				}
				else
					i++;
			}
		}
		
	}
	ptr = (char **)malloc(sizeof(char *) * count + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] != ' ' || str[i] != '\0')
		{
			wordcount = 0;
			while (str[i] != ' ' || str[i] != '\0')
			{
				wordcount++;
				i++;
				if (str[i] == ' ' || str[i] == '\0')
					break;
			}
			*(ptr + j) = (char *)malloc((wordcount + 1) * sizeof(char));
			flag = i - wordcount;
			setter = 0;
			while (wordcount > 0)
			{
				if (str[flag] == ' ' || str[flag] == '\0')
					break;
				(*(*(ptr + j) + setter)) = str[flag];
				flag++;
				++setter;
			}
			(*(*(ptr + j) + (setter))) = '\0';
			j++;
		}
	}
	return (ptr);
}
