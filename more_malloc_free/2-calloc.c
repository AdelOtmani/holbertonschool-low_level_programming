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
	void *p1;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p1 = malloc(nmemb * size);
	if (p1 == NULL)
	{
		return (NULL);
	}
	p = p1;
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = '\0';
	}
	return (p);
}

