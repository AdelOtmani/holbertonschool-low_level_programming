#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_note - check the code
 * @head: arg
 * @str: arg pointer
 * Return: adresse of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int i = 0;
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	
	s = strdup(str);
	if (s == NULL)
	{
		free(p);
		return (NULL);
	}
	
	while (str[i])
		i++;

	p->str = s;
	p->i = i;
	p->next = *head;

	*head = p;

	return (p);
}
