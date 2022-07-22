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
	dlistint_t *next;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && i < index - 1)
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
	}

	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
