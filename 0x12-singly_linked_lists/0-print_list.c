#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list
 * @h: the pointer that contains addres of head
 *
 * Return: address of node
 */
size_t print_list(const list_t *h)
{
	size_t count =  0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
		return (count);
}
