#include "search_algos.h"
#include <math.h>
/**
 * jump_search - finds an element using jumpsearch
 * @array: array passed
 * @size: the size of the array
 * @value: value of the array
 *
 * Return: Index of the value if found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end, base, i;

	if (array == NULL )
		return (-1);
	base = (size_t)sqrt(size);
	end = base;
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end = end + base;
		if (end > size - 1)
		{
			end = size - 1;
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
