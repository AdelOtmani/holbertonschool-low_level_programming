#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Check the code
 * @min: is an int
 * @max: is an int
 * Return: p array
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		p[i] = min++;
	}
	return (p);
}



