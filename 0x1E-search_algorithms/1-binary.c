#include "search_algos.h"
/**
 * binary_search_private - searches for an element
 * @array: array passed
 * @left: begining of array
 * @right: end of array
 * @value: value passed
 *
 * Return: index of value
 */
int binary_search_private(int *array, size_t left, size_t right, int value)
{
	int middle;
	size_t i;

	if (left > right)
		return (-1);
	middle = left + ((right - left) / 2);
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	if (value == array[middle])
		return (middle);
	else if (value < array[middle])
	{
		return (binary_search_private(array, left, middle - 1, value));
	}
	else
	{
		return (binary_search_private(array, middle + 1, right, value));
	}
}
/**
 * binary_search - uses binary search
 * @array: the array passed
 * @size: size of the array
 * @value: value we want
 *
 * Return: index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right;
	int index;

	if (size == 0)
		return (-1);
	left = 0;
	right = size - 1;
	index = binary_search_private(array, left, right, value);
	return (index);
}
