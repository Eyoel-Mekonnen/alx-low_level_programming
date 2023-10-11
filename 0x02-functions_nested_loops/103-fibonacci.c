#include <stdio.h>
#include <stdlib.h>

/**
 * main - even fibonacci sum
 *
 * Return: Always 0.
 */
int main(void)
{
	int  num1 = 1, num2 = 2, num3 = 0, sum = 0, checker = 2;

	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		if (num3 % checker == 0)
			sum = sum + num3;
		num1 = num2;
		num2 = num3;
		
	}
	printf("%d\n", sum);
	return (0);
}
