#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: address of the first node
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
