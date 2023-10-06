#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
