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
	if (p == NULL || head == NULL)
		return (NULL);
	p->n = n;
	if (tmp == NULL)
		p->next = NULL;
	else
	{
		p->next = tmp;
		tmp->prev = p;
	}
	p->next = NULL;
	*head = p;
	return (p);
}
