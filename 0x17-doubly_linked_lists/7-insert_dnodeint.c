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
	dlistint_t *ptr2;
	size_t count = 0;

	if (*h == NULL || idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (*h);
	}
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	ptr1 = *h;
	while ((count + 1) != idx)
	{	
		count++;
		ptr1 = ptr1->next;

	}
	if (count > idx)
		return (NULL);
	if (ptr1->next->next == NULL)
	{
		*h = add_dnodeint_end(h, n);
		free(node);
		return (*h);
	}
	else
		ptr2 = ptr1->next->next;
	node->prev = ptr1;
	node->next = ptr2;
	ptr1->next = node;
	ptr2->prev = node;
	return (*h);
}
