#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Check the code
 * @head: double pointer arg
 * @idx: unsigned int arg
 * @n :arg int
 * Return: data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *h;
	unsigned int i;

	*tmp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; i + 1 < idx; i++)
	{
		if (tmp->next == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	half = tmp->next;
	tmp->next = node;
	node->next = h;
	return (node);
}
