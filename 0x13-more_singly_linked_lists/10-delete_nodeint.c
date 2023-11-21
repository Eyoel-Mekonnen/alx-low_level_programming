#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a certain index
 * @head: the head of the node
 * @index: the index of the node
 *
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	tmp2 = *head;
	tmp1 = tmp2;
	if (index == 0)
	{
		tmp2 = tmp2->next;
		free(*head);
		*head = tmp2;
		return (1);
	}
	while (tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		counter++;
		if (index == counter)
		{
			tmp1->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		else
			tmp1 = tmp2;
	}
	return (-1);
}

