#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * free_list - Check the code
 * @head: list
 * Return: null
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
