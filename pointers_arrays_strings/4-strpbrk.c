#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - check the code
 * @s: arg is char pointer
 * @accept: arg is a char pointer
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[n] == accept[i])
				return (&s[n]);
		}
	}
	return (NULL);
}
