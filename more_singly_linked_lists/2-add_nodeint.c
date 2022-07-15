#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Check
 * @*head: arg
 * @n: int arg
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	n = p->n;
	*head = p->next;
	p = *head;
	return (p);
}
