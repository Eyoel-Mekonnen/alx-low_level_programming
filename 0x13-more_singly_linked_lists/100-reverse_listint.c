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
	tmp2 = (*head)->next->next;
	tmp1 = (*head)->next;
	(*head)->next = NULL;
	while (tmp2->next != NULL)
	{
		tmp1->next = *head;
		*head = tmp1;
		tmp1= tmp2;
		tmp2 = tmp2->next;
	}
	tmp2->next = *head;
	*head = tmp2;
	return (*head);
}
