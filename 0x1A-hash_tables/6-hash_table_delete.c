#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the address of the hash
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *ptr;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			ptr = node;
			node = node->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
