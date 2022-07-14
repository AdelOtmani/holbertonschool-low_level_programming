#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - Check the code
 * @h: list
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
