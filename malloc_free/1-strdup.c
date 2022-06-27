#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Check the code
 * @str: is a char
 * Return: Always
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] < '\0'; i++)
	{
		size++;
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] < '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
