#include "lists.h"
/**
 * free_list - lists linked list
 * @head: accepts the pointer to first node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(head);
}
