#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Check the code
 * @b: is an unsigned int
 * Return: not with void
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
