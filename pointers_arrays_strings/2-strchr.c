#include "main.h"
#include <stddef.h>

/**
 * *_strchr - check the code
 * @s: arg is char pointer
 * @c: arg is a char pointer
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (&s[i]);
}
