#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 * @ht: the hash table structre
 * @key: the key of the value
 *
 * Return: value stored at that key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *keyv;
	unsigned long int index;
	char *value;
	hash_node_t *checker;

	if (ht == NULL ||  key == NULL)
		return (NULL);
	keyv = (const unsigned char *)key;
	index = key_index(keyv, ht->size);
	checker = ht->array[index];

	while (checker != NULL)
	{
		if (strcmp(checker->key, key) == 0)
		{
			value = strdup(checker->value);
			return (value);
		}
		checker = checker->next;
	}
	return (NULL);
}
