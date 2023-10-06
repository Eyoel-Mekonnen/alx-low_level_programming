#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int n = 97;

	while (n >= 97 && n <= 122)
	{
		putchar(n);
		n++;
	}

	n = 65;

	while (n >= 65 && n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
