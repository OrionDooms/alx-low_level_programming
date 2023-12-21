#include "hash_tables.h"
/**
 * key_index - the function that gives you the index of a key.
 * @key: the key is stored in the array of the hash table
 * @size: size of the array of the hash table.
 * Return: Returns the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
