#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * key_index - gives the index of a key
 * @key: char arg
 * @size: int arg
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int hash;

		hash = hash_djb2(key);
		return (hash % size);
}
