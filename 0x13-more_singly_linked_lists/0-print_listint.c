#include "lists.h"
/**
 * print_listint - prints all elements
 * @h: address of first node
 *
 * Return: count of type of size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (counter);
	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (counter);
}
