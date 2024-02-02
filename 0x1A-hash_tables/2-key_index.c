#include "hash_tables.h"
/**
 * key_index - index of a key
 * @key: the string passed
 * @size:: size of the array structure
 *
 * Return: index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
