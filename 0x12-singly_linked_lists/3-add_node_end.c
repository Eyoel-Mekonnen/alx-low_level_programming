#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node at the last
 * @head: address of pointer to a pointer
 * @str: the string passed
 *
 * Retrun: the added node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *last_node;
	size_t counter = 0;
	
	if (*head == NULL)
		return (NULL);
	while (str[counter] != '\0')
		counter++;
	tmp = malloc(sizeof(list_t));
	tmp = *head;
	last_node = malloc(sizeof(list_t));
	last_node->str = strdup(str);
	last_node->len = counter;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = last_node;
	return (last_node);
}
