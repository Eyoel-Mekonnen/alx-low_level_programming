#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - execute fucntion on each array
 * @array: array of integers
 * @action: function address
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}


