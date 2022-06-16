#include "main.h"

/**
 * *_strncpy - check the code
 * @dest: arg is int pointer
 * @src: arg is a pointer
 * @n: arg is an int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
