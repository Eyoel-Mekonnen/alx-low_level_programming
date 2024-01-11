#include "lists.h"
/**
 * sum_dlistint - adds the sum of all data
 * @head: the address of the first head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
