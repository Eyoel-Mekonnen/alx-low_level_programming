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
	list_t *end_node;
	list_t *tmp;
	size_t counter = 0;
	
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	while (str[counter] != '\0')
		counter++;
	end_node->str = strdup(str);
	end_node->len = counter;
	if (*head == NULL)
	{
		end_node->next = *head;
		*head = end_node;
	}
	else
	{
		end_node->next = NULL;
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_node;

	}
	return (end_node);
}
