#include "search_algos.h"
#include <stddef.h>
/**
 * interpolation_search_p - searches using interpolation
 * @array: array passed
 * @low: lower bound
 * @high: higher bound
 * @value: value passed
 *
 * Return: Index of value found
 */
size_t interpolation_search_p(int *array, size_t low, size_t high, int value)
{
	size_t index;

	if (low > high)
		return (-1);
	index = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

	if (index > high || index < low)
		printf("Value checked array[%ld] is out of range\n", index);
	else
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	if (index > high || index < low)
	{
		return (-1);
	}
	if (array[index] == value)
		return (index);
	else if (value < array[index])
	{
		high = index - 1;
		return (interpolation_search_private(array, low, high, value));
	}
	else if (value > array[index])
	{
		low = index + 1;
		if (low <= high)
			return (interpolation_search_private(array, low, high, value));
		else
			return (-1);
	}
	return (-1);
}
/**
 * interpolation_search - searches sorted array using interpolation
 * @array: array passed
 * @size: size passed
 * @value: value passed
 *
 * Return: Index of the found value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	int index;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	index = (size_t)interpolation_search_p(array, low, high, value);
	return (index);
}
