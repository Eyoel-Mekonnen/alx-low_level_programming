#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	long double  num1 = 1, num2 = 2, num3 = 0;
	int i = 0;

	while (i < 48)
	{
		if (i == 0)
			printf("%.Lf, %.Lf, ", num1, num2);
		num3 = num1 + num2;
		if (i == 47)
		{
			printf("%.Lf\n", num3);
			break;
		}
		printf("%.Lf, ", num3);
		num1 = num2;
		num2 = num3;
		i++;
	}
	printf("\n");
	return (0);
}
