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
	listint_t *tmp1, *tmp2, *ptr2;
	unsigned int counter = 0;

	ptr2 = (listint_t *)malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	if (*head == NULL)
		return (ptr2);
	tmp2 = *head;
	tmp1 = tmp2;
	while (tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		counter++;
		if (idx == counter)
		{
			tmp1->next = ptr2;
			ptr2->next = tmp2;
			return (ptr2);
		}
		else
			tmp1 = tmp2;
	}
	return (NULL);
}
