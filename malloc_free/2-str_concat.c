#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Check the code
 * @s1: is a char pointer
 * @s2: is a char pointer
 * Return: Always
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, size = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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
	for (i = 0; s2[i] != '\0'; i++)
	{
		s[j] = s2[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}
