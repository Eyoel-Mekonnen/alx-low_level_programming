#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: address of the entire hash table structure
 * @key: the key
 * @value: value
 *
 * Return: 1 on Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *checker;
	const unsigned char *keyv;

	keyv = (const unsigned char *)key;
	if (ht == NULL || key == NULL)
		return (0);
	index = key_index(keyv, ht->size);
	checker = ht->array[index];
	while (checker != NULL)
	{
		if (strcmp(checker->key, key) == 0)
		{
			free(checker->value);
			checker->value = strdup(value);
			return (1);
		}
		checker = checker->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		newNode->next = NULL;
		ht->array[index] = newNode;
		return (1);
	}
	else
	{
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
		return (1);
	}
}
