#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - Check the code
 * @h: list
 * Return: nodes
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
