#include "main.h"

/**
 * *_strncat - check the code
 * @dest: arg is int pointer
 * @src: arg is a pointer
 * @n: arg is an int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n ; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
