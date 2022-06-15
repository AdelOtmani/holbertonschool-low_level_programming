#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 * @s: arg is a pointer
 *
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
