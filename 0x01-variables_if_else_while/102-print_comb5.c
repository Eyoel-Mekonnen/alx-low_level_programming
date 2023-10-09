#include <stdlib.h>
#include <stdio.h>

void print_s(int num1, int num2, int num3, int num4);

/**
 * condition - condition 2
 */
void condition(void)
{
	putchar(',');
	putchar(' ');
}
/**
 * main - main function
 *
 * Return: 0 if Sucessful
 */
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 1;

	while (num1 <= 9)
	{
		/**
		if ((num1 == num3) && (num2 == num4))
		{
			num4++;
		}
		**
		*else
		**/
		if (((num1 <= num3) && (num3 + num4 >= num1 + num2)) ||
				((num1 == 0) && ((num1 <= 3) && (num3 != 0))))
		{
			print_s(num1, num2, num3, num4);
			if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
				break;
			condition();
			++num4;
			if (num4 > 9)
			{
				num3 = num3 + 1;
				num4 = 0;
			}
			if (num3 > 9)
			{
				num2 = num2 + 1;
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
		else if (num4 > 9 && num3 <= 9)
		{
			num3++;
			num4 = 0;
		}
		else if (num3 > 9)
		{
			num2++;
			num3 = 0;
			num4 = 0;
		}
		else if (num2 > 9)
		{
			num1++;
			num2 = 0;
			num3 = 0;
			num4 = 0;
		}
		else
			++num4;
	}
	putchar('\n');
	return (0);
}

/**
 * print_s - function that prints numbers
 *
 * @num1: number 1
 * @num2: number 2
 * @num3: number 3
 * @num4: number 4
 *
 */

void print_s(int num1, int num2, int num3, int num4)
{
	putchar(num1 + 48);
	putchar(num2 + 48);
	putchar(' ');
	putchar(num3 + 48);
	putchar(num4 + 48);
}
