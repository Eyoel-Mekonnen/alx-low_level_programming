#include <stdio.h>

/**
 * main - print all arguments
 * @argc: counts the number of argument
 * @argv: stores arguments in array of pointers
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
