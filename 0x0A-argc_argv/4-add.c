#include <stdio.h>

/**
 * atoi_ - convet string to int
 *
 * @s1: string one
 *
 * Return: Always the int
 */
int atoi_(char *s1)
{
	int len = 0, sum = 0, num, i = 0;

	while (s1[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		num = s1[i] - '0';
		sum = sum + num;
		if (s1[i + 1] == '\0')
			break;
		sum = sum * 10;
	}
	return (sum);
}

/**
 * main - adds number
 * @argc: Number of arguments
 * @argv: array of pointers
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0, num, correct = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] < '9' && argv[i] > '0')
		{	
			num = atoi_(argv[i]);
			sum = sum + num;
		}
		else
		{
			correct++;
				break;
		}
	
	}
	if (correct > 0)
		printf("Error\n");
	else
		printf("%d\n", sum);

	return (0);

}
