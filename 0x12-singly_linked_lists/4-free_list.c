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

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
