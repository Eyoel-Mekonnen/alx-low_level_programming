#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: the size of the array of integers
 * @cmp: pointer to function to compare values
 *
 * Return: first index where cmp doesnot return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
		return (-1);
}
