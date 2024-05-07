#include "search_algos.h"
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
	size_t left, right, middle;

	if (size == 0)
		return (-1);
	left = 0;
	right = size;
	middle = left + (right - left) / 2;
	if (value == array[middle])
		return (middle);
	else if (value < array[middle])
	{
		if (middle == 0)
			return (-1);
		return (binary_search(array, middle, value));
	}
	else
	{
		if (middle == right)
			return (-1);
		return (binary_search(array + middle + 1, right - middle, value));
	}
}
