#include "lists.h"
/**
 * add_nodeint - Check
 * @*head: arg
 * @n: int arg
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *p;

	p = malloc(sizeof(lisint_t));
	if (p == NULL)
		return (NULL);
	n = p->n;
	*head = p->next;
	p = *head;
	return (p);
}
