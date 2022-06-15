#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 * @a: arg is a pointer
 * @b: arg is a pointer too
 * Return: always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return(i);
}
