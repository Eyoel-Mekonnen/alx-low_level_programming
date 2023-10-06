#include <stdlib.h>
#include <stdio.h>
/**
 * main - main Function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
