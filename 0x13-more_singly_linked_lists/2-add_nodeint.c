#include "lists.h"
/**
 * add_nodeint - adds node to begining of a node
 * @head: address of pointer to first node
 * @n: integer passed
 * Return: address of new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
