#include "lists.h"
/**
 * add_nodeint_end - Check
 * @head: arg double pointer
 * @n: int arg
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s, *l;

	l = *head;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->n = n;
	s->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (l->next)
		{
			l = l->next;
		}
		l->next = s;
	}

	return (s);
}
