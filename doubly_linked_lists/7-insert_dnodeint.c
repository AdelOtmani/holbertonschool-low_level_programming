#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Check the code
 * @h: double pointer arg
 * @idx: unsigned int arg
 * @n :arg int
 * Return: data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *tmp;

	tmp = *h;
	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		if (tmp->next == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		idx--;
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	p->n = n;
	p->prev = tmp;
	p->next = tmp->next;
	tmp->next = p;
	return (p);
}
