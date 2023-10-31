#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatentates arguments
 * @ac: number of argument
 * @av: the strings
 *
 * Return: pointer to the dynamically allocated space
 */
char *argstostr(int ac, char **av)
{
	int count = 0, i = 0, k = 0, j;
	char *ptr;

	while (i < ac)
	{
		j = 0;
		while ((*(*(av + i) + j)) != '\0')
		{
			count++;
			j++;
			if ((*(*(av + i) + j)) == '\0')
			{
				count++;
				break;
			}
		}
		i++;
	}
	ptr = (char *)malloc((sizeof(char) * count) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while ((*(*(av + i) + j)) != '\0')
		{
			*(ptr + k) = (*(*(av + i) + j));
			k++;
			j++;
			if ((*(*(av + i) + j)) == '\0')
			{
				*(ptr + k) = '\n';
				k++;
				break;
			}
		}
		i++;
	}
	*(ptr + k) = '\0';
	return (ptr);
}
