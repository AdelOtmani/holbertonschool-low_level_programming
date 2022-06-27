#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Check the code
 * @str: is a char
 * Return: Always
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, size;
	int j = 0;

	if (s1 && s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size++;
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] != '\0'; i++, j++)
	{
		s[j] = s2[i];
	}
	s[i] = '\0';
	return (s);
}
