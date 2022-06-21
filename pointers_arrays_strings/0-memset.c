#include "main.h"

/**
 * *_memset - check the code
 * @s: arg is char pointer
 * @b: arg is a char
 * @n: arg is an int
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
