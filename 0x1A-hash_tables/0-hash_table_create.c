#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *the_table;
	unsigned long int count = 0;

	if (size <= 0)
		return (NULL);

	the_table = malloc(sizeof(hash_table_t));
	if (the_table == NULL)
		return (NULL);

	the_table->size = size;
	the_table->array = malloc(sizeof(hash_node_t) * size);
	if (the_table->array == NULL)
		return (NULL);

	while (count < size)
	{
		the_table->array[count] = NULL;
		count++;
	}

	return (the_table);
}
