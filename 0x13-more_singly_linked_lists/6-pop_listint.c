#include "lists.h"
/**
 * pop_listint - delete head node and return its data
 * @head: addres of head node
 *
 * Return: the data of head which is int
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	ptr = *head;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (num);
}
