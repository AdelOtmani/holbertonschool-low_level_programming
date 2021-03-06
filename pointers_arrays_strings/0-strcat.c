#include "main.h"

/**
 * *_strcat - check the code
 * @dest: arg is int pointer
 * @src: arg is a pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
