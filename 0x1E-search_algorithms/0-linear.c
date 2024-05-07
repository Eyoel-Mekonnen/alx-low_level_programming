#include "search_algos.h"
/**
 * linear_search - Search an element in an array
 * @array: the array passed
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of the value found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter = -1, i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (counter);
}
