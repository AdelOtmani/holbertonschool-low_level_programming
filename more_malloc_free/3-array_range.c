#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}



