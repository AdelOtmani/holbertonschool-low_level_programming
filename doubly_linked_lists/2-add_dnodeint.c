#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Check
 * @head: arg
 * @n: int arg
 * Return: p
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *tmp = *head;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->prev = NULL;
	p->next = tmp;
	if (tmp != NULL)
	{
		tmp->prev = NULL;
	}
	*head = p;
	return (p);
}
