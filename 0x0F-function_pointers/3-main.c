#include "3-calc.h"

/**
 * main - takes in argment
 * @argc: number of arguments
 * @argv: the argument as a string
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, calculated;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	if (ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	calculated = ptr(num1, num2);
	printf("%d\n", calculated);
	return (0);
}

