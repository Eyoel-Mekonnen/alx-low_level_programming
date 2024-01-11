#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints doubly linked lists
 * @h: address of the head node
 *
 * Return: address of the head
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
