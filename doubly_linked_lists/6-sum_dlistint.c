#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - Check the code
 * @head: pointer arg
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
