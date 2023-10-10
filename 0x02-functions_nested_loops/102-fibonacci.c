#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, num3 = 0, i = 0;

	while (i < 50)
	{
		num3 = num1 + num2;
		printf("%ld, ", num3);
		if (i == 49)
			break;
		num1 = num2;
		num2 = num3;
		i++;
	}
	printf("\n");
	return (0);
}
