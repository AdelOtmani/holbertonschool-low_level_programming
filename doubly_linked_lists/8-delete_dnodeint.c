#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function
 * @head: double pointer arg
 * @index: arg uns int
 * Return: 1 sucess
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (; tmp->next != NULL && i < index; tmp = tmp->next, i++)
	if (tmp->next == NULL && i < index)
		return (-1);
	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
