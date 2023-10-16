#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the string
 * @s: the string passed
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char temp;
	int z = 0;
	int len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	while (z < i / 2)
	{
		temp = s[z];
		s[z] = s[len];
		s[len--] = temp;
		z++;
	}
}
