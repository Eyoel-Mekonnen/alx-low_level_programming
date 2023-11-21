#include "lists.h"
/**
 * free_listint2 - frees node list and set it to null
 * @head: pointer to pointer of head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
