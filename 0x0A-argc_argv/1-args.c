#include <stdio.h>

/**
 * main - main function
 * @argc: counts the arguments
 * @argv: array of pointer to character
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
