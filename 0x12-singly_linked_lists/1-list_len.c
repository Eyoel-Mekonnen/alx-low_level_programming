#include "lists.h"
/**
 * list_len - return the number of elements in a lsit
 * @h: the header passed
 *
 * Return: counts of number of element
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
