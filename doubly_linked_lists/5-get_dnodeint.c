#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Check
 * @head: arg pointer
 * @index: unsigned int arg
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
