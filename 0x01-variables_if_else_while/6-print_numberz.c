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

	while (num <= 9)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');
	return (0);
}
