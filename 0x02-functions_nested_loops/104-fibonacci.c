#include <stdio.h>

/**
 * main - print fibonacci 98
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, num3 = 0;
	int i = 0;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu, %lu, ", num1, num2);
		num3 = num1 + num2;
		if (i == 97)
		{
			printf("%lu", num3);
			break;
		}
		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
		i++;
	}
	printf("\n");
	return (0);
}
