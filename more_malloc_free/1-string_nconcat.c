#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Check the code
 * @b: is an unsigned int
 * Return: not with void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0, i, j;
	char *s;

	
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
		size++;

	s = malloc(sizeof(char) * (size + n + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		s[size + j] = s2[j];
	}
	s[size + j] = '\0';
	return (s);
}
