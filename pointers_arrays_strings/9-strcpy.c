#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: arg is int pointer
 * @n: arg is a int
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
