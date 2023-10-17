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
	int positive  = 0, negative = 0;
	while (s[i] != '\0')
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
				num = s[i] - '0';

				sum = num + sum;
				if (!(s[i + 1] - '0' >= 0 && s[i + 1] - '0' <= 9))
					break;
				sum = sum * 10;
		}
		else if (s[i] == '+')
			positive++;
		else if (s[i] == '-')
			negative++;
		if (negative % 2 == 0)
			indicator = indicator;
		else
			indicator = -indicator;
		i++;
		
	}
	return (sum * indicator);
}
