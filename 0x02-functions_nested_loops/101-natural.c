#include <stdlib.h>
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0, sum = 0;

	while (n <= 1024)
	{
		if (n % 15 == 0)
			sum = sum + n;
		else if (n % 3 == 0)
			sum = sum + n;
		else if (n % 5 == 0)
		{
			sum = sum + n;
		}
			n++;
	}
	printf("%d\n", sum);
	return (0);
}
