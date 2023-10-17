#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns integer
 *@s: the string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sum = 0, num;
	int indicator = 1;
	while (s[i] != '\0')
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
				num = s[i] - '0';
				if (s[i - 1] == '-')
					indicator = -indicator;

				sum = num + sum;
				if (!(s[i + 1] - '0' >= 0 && s[i + 1] - '0' <= 9))
					break;
				sum = sum * 10;
		}
		i++;
		
	}
	return (sum * indicator);
}
