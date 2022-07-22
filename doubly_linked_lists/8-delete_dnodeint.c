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
		if (tmp->next == NULL)
		{
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
		}
	}

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
			return (-1);
	}

	tmp->next->prev = tmp->next;
	if (tmp->next == NULL)
		tmp->next->prev = tmp->prev;
	free(tmp->prev);
	return (1);
}
