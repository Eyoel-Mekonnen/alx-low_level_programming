#include "main.h"

/**
 * jack_bauer - prints every minute f 24
 *
 */
void jack_bauer(void)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

	while (num1 <= 2)
	{
		if ((num1 <= 1 && num2 <= 9) || (num1 == 2 && num2 <= 4))
		{
			_putchar(num1 + 48);
			_putchar(num2 + 48);
			_putchar(':');
			_putchar(num3 + 48);
			_putchar(num4 + 48);
			_putchar('\n');
			++num4;
			if (num4 > 9)
			{
				num3++;
				num4 = 0;
			}
			if (num3 > 5)
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
		else
			num1++;
	}
}
