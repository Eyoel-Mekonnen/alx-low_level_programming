#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int num1 = 0, num2 = 1;

	while (num1 < 9)
	{

		if (num1 < num2)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}	
			num2++;
			if (num2 > 9)
			{
				num1++;
				num2 = 1;
			}

		}
		if (num1 >= num2)
			num2 = num2 + 1;
	}
	putchar('\n');
	return (0);

}
