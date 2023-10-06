#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int num = 0;
	int c = 97;

	while (num <= 9)
	{
		putchar(num + 48);
		num++;
	}
	while (c >= 97 && c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
