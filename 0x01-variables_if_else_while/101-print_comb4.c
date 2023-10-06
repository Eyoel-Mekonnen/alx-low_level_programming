#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int num1 = 0, num2 = 1, num3 = 2;

	while (num1 < 8)
	{
		if (num1 < num2 && num2 < num3 && num1 < num3)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			putchar(num3 + 48);
			if (num1 != 7 || num2 != 8 || num3 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num3++;
			if (num3 > 9)
			{
				num2 = num2 + 1;
				num3 = 2;
			}
			if (num2 > 8)
			{
				num1 = num1 + 1;
				num2 = 1;
			}
		}
		if (num1 >= num2)
			num2 = num2 + 1;
		if (num2 >= num3)
			num3 = num3 + 1;
	}
	putchar('\n');
	return (0);
}
