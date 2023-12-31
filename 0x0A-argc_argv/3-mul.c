#include <stdio.h>
/**
 * atoi_ - converts string to integer
 * @s1: the string passed
 *
 * Return: the number
 */

int atoi_(char *s1)
{
	int i;
	unsigned int sum = 0, num1;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == '-')
			i++;
		if (s1[i] >= '0' && s1[i] <= '9')
		{
			num1 = s1[i] - '0';
		}
		sum = sum + num1;
		if (s1[i + 1] == '\0')
			break;
		sum = sum * 10;
	}
	if (s1[0] == '-')
		sum = -1 * sum;
	return (sum);
}




/**
 * main - check the code
 * @argc: number of arguments passed
 * @argv: the argments passed as arrays
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int num1;
	int num2;

	if (argc == 3)
	{

		num1 = atoi_(argv[1]);
		num2 = atoi_(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
		printf("Error\n");
	return (0);
}
