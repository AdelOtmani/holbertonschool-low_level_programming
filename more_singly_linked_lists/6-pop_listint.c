#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Check
 * @head: arg double pointer
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	tmp2 = tmp->next;
	n = tmp->n;
	free(*head);
	*head = tmp2;

	return (n);
}
