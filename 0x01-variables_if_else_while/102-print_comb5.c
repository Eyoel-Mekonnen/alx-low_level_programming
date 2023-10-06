#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 1;

	while (num1 < 10)
	{
		if ((num3 + num4) >= (num1 + num2))
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			putchar(' ');
			putchar(num3 + 48);
			putchar(num4 + 48);
			putchar(' ');
			num4++;
			if (num4 > 9)
			{
				num3++;
				num4 = 0;
			}
			if (num3 > 9)
			{
				num2++;
				num3 = 0;
				num4 = 0;
			}
			if (num2 > 9)
			{
				num1++;
				num2 = 0;
				num3 = 0;
				num4 = 0;
			}
		}
	putchar('\n');
	return (0);
}
