#include "lists.h"
/**
 * free_dlistint - free a given dobuly linked list
 * @head: address of the head
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
