#include "lists.h"
/**
 * delete_dnodeint_at_index - delets a node at index
 * @head: the head of the node
 * @index: the index where it will be deleted
 *
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	size_t count = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
		       free(*head);
		}
		else
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
			return (1);
		}
	}
	ptr1 = *head;
	while (count < index && (ptr1->next != NULL))
	{	
		ptr1 = ptr1->next;
		count++;
	}
	if (ptr1->next == NULL && count < index)
	{
		return (-1);
	}
	else if (ptr1->next == NULL)
	{	
		ptr1->prev->next = NULL;
		free(ptr1);
		return (1);
	}
	else
	{
		ptr1->prev->next = ptr1->next;
		ptr1->next->prev = ptr1->prev;
		free(ptr1);
	}
	return (1);
}
