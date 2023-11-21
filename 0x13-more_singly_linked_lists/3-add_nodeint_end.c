#include "lists.h"
/**
 * add_nodeint_end - adds a node at the edn
 * @head: address of pointer of a pointer of head
 * @n: the integer data that is going to be added
 *
 * Return: Address of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *ptr;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	ptr = *head;
	return (*head);
}
