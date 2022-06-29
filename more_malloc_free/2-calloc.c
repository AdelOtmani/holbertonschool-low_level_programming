#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - Check the code
 * @nmemb: unsigned int arg
 * @size: unsigned int arg
 * Return: nothing with void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	unsigned int i;

	if (nmemb || size)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}

