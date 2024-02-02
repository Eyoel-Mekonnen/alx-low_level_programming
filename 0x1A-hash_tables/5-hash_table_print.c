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

		while (printer != NULL)
		{
			if (tracker > 0)
			{
				printf(", ");
			}
			printf("'%s': ", printer->key);
			printf("'%s'", printer->value);
			tracker = 1;
			printer = printer->next;
		}
	}
	printf("}\n");
}
