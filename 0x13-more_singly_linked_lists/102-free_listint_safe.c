#include "lists.h"

/**
 * free_list_pointer - Frees a linked list of type listp_t.
 * @head: Pointer to the head of the list.
 */
void free_list_pointer(listp_t **head)
{
    listp_t *temp_node;
    listp_t *current_node;

    if (head != NULL)
    {
        current_node = *head;
        while ((temp_node = current_node) != NULL)
        {
            current_node = current_node->next;
            free(temp_node);
        }
        *head = NULL;
    }
}

/**
 * free_listint_safely - Frees a linked list of type listint_t safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the freed list.
 */
size_t free_listint_safely(listint_t **head)
{
    size_t node_count = 0;
    listp_t *helper_list_head = NULL, *new_helper_node, *helper_node_iterator;
    listint_t *current_node;

    while (*head != NULL)
    {
        new_helper_node = malloc(sizeof(listp_t));
        if (new_helper_node == NULL)
            exit(98);

        new_helper_node->p = (void *)*head;
        new_helper_node->next = helper_list_head;
        helper_list_head = new_helper_node;

        helper_node_iterator = helper_list_head;

        while (helper_node_iterator->next != NULL)
        {
            helper_node_iterator = helper_node_iterator->next;
            if (*head == helper_node_iterator->p)
            {
                *head = NULL;
                free_list_pointer(&helper_list_head);
                return (node_count);
            }
        }
        current_node = *head;
        *head = (*head)->next;
        free(current_node);
        node_count++;
    }
    *head = NULL;
    free_list_pointer(&helper_list_head);
    return (node_count);
}

