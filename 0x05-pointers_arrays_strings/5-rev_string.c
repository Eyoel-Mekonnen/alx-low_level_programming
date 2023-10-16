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

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		temp = s[z];
		s[z] = s[i];
		s[i] = temp;
		z++;
		i--;
	}
	
}
