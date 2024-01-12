#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: address of the head
 * @idx: index of the node
 * @n: the data to be added
 *
 * Return: updated head node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *ptr1;
	size_t count = 0;

	if (*h == NULL)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	ptr1 = *h;
	while ((count + 1) != idx)
	{
		ptr1 = ptr1->next;
		if (ptr1 == NULL)
			return (NULL);
		count++;
	}
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = ptr1;
	node->next = ptr1->next;
	if (ptr1->next != NULL)
		ptr1->next->prev = node;
	ptr1->next = node;
	return (node);
}
