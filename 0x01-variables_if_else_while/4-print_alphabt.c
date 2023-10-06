#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int c = 97;

	while ((c >= 97 && c <= 122))
	{
		if (c == 101 || c == 113)
			++c;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
