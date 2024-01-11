#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node
 * @head: address of the head node
 * @index: index to be found
 *
 * Return: the nth node of the linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	if (index == 0)
		return (head);
	while (count != index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		count++;
	}
	if (count > index)
		return (NULL);
	return (node);
}
