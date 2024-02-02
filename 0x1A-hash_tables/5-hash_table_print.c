#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: address of the hash table structure
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int tracker = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *printer = ht->array[i];
		if (tracker == 1)
			printf(", ");
		while (printer != NULL)
		{
			printf("'%s': ", printer->key);
			printf("'%s'", printer->value);
			printer = printer->next;
			if (printer != NULL)
				printf(", ");
		}
		tracker = 1;
	}
	printf("}\n");
}
