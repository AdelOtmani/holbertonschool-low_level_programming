#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_create - Function main
 * @size: long int arg
 * Return: Returns a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_htable;

	if (!size)
	{
		return (NULL);
	}
	new_htable = malloc(sizeof(hash_table_t));
	if (new_htable == NULL)
	{
		return (NULL);
	}
	new_htable->size;
	new_htable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_htable->array == NULL)
	{
		free(new_htable);
		return (NULL);
	}
	for (unsigned long int i = 0; i < size; i++)
	{
		new_htable->array[i] = NULL;
	}
	return (new_htable);
}
