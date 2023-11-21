#include "lists.h"
/**
 * reverse_listint - reverses a string
 * @head: address of pointer to a pointer of head
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (*head == NULL)
		return (NULL);
	tmp2 = (*head)->next;
	tmp1 = NULL;
	(*head)->next = tmp1;
	while (tmp2 != NULL)
	{
		tmp1 = tmp2;
		tmp2 = tmp2->next;
		tmp1->next = *head;
		*head = tmp1;
	}
	free(tmp2);
	return (*head);
}
