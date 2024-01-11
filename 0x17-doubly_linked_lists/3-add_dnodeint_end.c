#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: address of the head node
 * @n: the data to be inserted
 *
 * Return: address of updated node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	if (*head == NULL)
	{
		(*head) = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
		node->next = NULL;
	}
	return (node);
}
