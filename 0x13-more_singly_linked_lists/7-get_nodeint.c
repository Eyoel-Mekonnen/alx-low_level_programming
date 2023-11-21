#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of list
 * @head: address of head
 * @index: the index
 *
 * Return: the address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int counter = 0;
	
	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		if (counter == index)
			return (ptr);
		counter++;
		ptr = ptr->next;
	}
	return (NULL);
}
