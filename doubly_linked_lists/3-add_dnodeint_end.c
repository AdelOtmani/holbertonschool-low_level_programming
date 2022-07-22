#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Check
 * @head: arg double pointer
 * @n: int arg
 * Return: node
 */
dlistint_t *add_nodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *tmp;

	tmp = *head;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->prev = NULL;
	p->next = tmp;

	if (*head != NULL)
	{
		*head = p;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = p;
	}

	return (p);
}
