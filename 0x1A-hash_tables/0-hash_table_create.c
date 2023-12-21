#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: point to a new hash table or return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL || size == 0)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);
	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
