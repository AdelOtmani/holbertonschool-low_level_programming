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
	for (; tmp != NULL && i < index; tmp = tmp->next, i++)
	if (tmp == NULL)
	{
		free(tmp);
		return (-1);
	}
	if (tmp == NULL && index == i)
	{
		free(tmp);
		return (-1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
