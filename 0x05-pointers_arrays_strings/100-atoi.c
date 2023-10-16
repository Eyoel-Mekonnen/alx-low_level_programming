#include "main.h"

/**
 * _atoi - returns integer
 *@s: the string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int len = 0;
	int i;
	int beg;
	int end;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			if (s[i - 1] == '-')
				return (s[i - 1]);
			else
				return (s[i]);
		}
	}

}
