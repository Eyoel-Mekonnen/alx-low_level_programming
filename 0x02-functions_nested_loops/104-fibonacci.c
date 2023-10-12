#include <stdio.h>

/**
 * main - print fibonacci 98
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, num3 = 0, num3b, num2b, num1b;
	int i = 0;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu, %lu, ", num1, num2);
		if (i < 92)
		{

			num3 = num1 + num2;
		}
		if (i == 97)
		{
			printf("%lu", num3);
			break;
		}
		if (i < 90)
		{
			printf("%lu, ", num3);
			num1 = num2;
			num2 = num3;
		}
		if (i >= 90)
		{

			num1 = (num2 + num2b) / 10000000000;
			num1b = (num2 + num2b) % 10000000000;
			num2 = (num3 + num3b) / 10000000000;
			num2b = (num3 + num3b) % 10000000000;
			num3 = ((num1 + num1b) + (num2 + num2b)) / 10000000000;
			num3b = ((num1 + num1b) + (num2 + num2b)) % 10000000000;
			printf("%lu%lu, ", num3, num3b);
		}
		i++;
	}
	printf("\n");
	return (0);
}
