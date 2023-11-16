#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node at the begining
 * @head: pointer that contains address of head
 * @str:: the string passed
 *
 * Return: count of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	size_t count = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	while (str[count] !=  '\0')
		count++;

	tmp->str = strdup(str);
	tmp->len = count;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
