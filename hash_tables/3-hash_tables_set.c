#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - the Function
 * @ht: arg
 * @key: char arg
 * @value: arg char
 * Return: set new htable
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *curr, *new_node;

	if (!ht || !key || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (!curr->value)
				return (0);
			return (1);
		}
		curr = curr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
		return (0);
	new_node->value = strdup(value);
	if (!new_node->value)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
