#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Check
 * @head: arg double pointer
 * @n: int arg
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *tmp;

	tmp = *head;
	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		p->prev = NULL;
		*head = p;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		p->prev = tmp;
		tmp->next = p;
	}

	return (p);
}
