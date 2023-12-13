#include "lists.h"

/**
 * print_listint_safe - Prints a linked list with a loop safely.
 * @head: Pointer to the first node of the linked list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current_node = head;
    const listint_t *loop_checker_node;
    size_t node_count = 0;
    size_t loop_index;

    while (current_node)
    {
        printf("[%p] %d\n", (void *)current_node, current_node->n);
        node_count++;
        current_node = current_node->next;
        loop_checker_node = head;
        loop_index = 0;

        while (loop_index < node_count)
        {
            if (current_node == loop_checker_node)
            {
                printf("-> [%p] %d\n", (void *)current_node, current_node->n);
                return (node_count);
            }
            loop_checker_node = loop_checker_node->next;
            loop_index++;
        }

        if (!head)
            exit(98);
    }
    return (node_count);
}

