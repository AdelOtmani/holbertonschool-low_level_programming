#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Check the code
 * @head: arg
 * @str: arg
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *tmp;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;

	tmp = *head;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = p;
	}
	return (p);
}
