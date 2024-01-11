#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginining
 * @head: address of the first node
 * @n: the data of the node to be added
 *
 * Return: the updated doubly linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		(*head)->prev = node;
		node->prev = NULL;
		node->next = *head;
		(*head) = node;
	}
	return (*head);
}
