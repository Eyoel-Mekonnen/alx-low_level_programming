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
	int len = 0, i = 0;
	unsigned int sum = 0, num;

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
	int i, correct = 0;
	unsigned int sum = 0, num;

	for (i = 0; i < argc && argc > 1; i++)
	{
		if (*(argv[i]) == '-')
				++i;
		if (*(argv[i]) >= '0' && (*(argv[i])) <= '9')
		{
			num = atoi_((argv[i]));
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
	else if (argc < 2)
		printf("0\n");
	else
		printf("%d\n", sum);

	return (0);

}
