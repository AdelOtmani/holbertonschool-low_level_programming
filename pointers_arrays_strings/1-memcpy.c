#include "main.h"

/**
 * *_memcpy - check the code
 * @dest: arg is char pointer
 * @src: arg is a char pointer
 * @n: arg is an unsigned int
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
