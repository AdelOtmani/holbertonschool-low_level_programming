#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - check
 * @h: arg cnst
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
