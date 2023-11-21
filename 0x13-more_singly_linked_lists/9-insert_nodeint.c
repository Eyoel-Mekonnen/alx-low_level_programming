#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a given poisition
 * @head: poiter to a pointer
 * @idx: index of the node
 * @n: the data to be inserted into the node
 *
 * Return: Address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *ptr;
	unsigned int counter = 0;
	
	if (head == NULL)
		return (NULL);
	tmp = *head;
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	while (tmp != NULL)
	{
		if (counter == idx)
		{
			ptr->next = tmp->next;
			tmp->next = ptr;
			return (ptr);
		}
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}
