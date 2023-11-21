#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: pointer to the pointer that contain the addres
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int num, sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		num = ptr->n;
		sum = sum + num;
		ptr = ptr->next;
	}
	return (sum);
}
