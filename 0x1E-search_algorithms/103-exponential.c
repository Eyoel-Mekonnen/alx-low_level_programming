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
                printf("%d", array[i]);
                if (i < right)
                        printf(", ");

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
 * exponential_search - search sorted array of exponential
 * @array: array passed
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: Index of found value
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, index;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while ((size_t)i < size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	left = i / 2;
	if ((size_t)i < size)
		right = i;
	else if ((size_t)i >= size)
		right = size - 1;
	printf("Value found in between indexes [%ld] and [%ld]\n", left, right);
	index = binary_search_private(array, left, right, value);
	return index;
}
