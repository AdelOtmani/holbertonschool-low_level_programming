#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list.
 * @head: arg double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	if (head == NULL)
		return;
	tmp2 = *head;
	while (*head)
	{
		tmp = tmp2->next;
		free(*head);
		tmp2 = tmp;
	}

	head = NULL;
}
