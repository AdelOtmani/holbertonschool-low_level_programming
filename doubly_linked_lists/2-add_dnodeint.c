#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Check
 * @head: arg
 * @n: int arg
 * Return: p
 */
listint_t *add_dnodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
