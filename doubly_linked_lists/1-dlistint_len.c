#include "lists.h"
/**
 * dlistint_len - Check
 * @h: arg
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
