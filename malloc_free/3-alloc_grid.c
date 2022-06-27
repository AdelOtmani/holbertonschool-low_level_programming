#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Check the code
 * @widht: is an int
 * @height: is an int
 * Return: Always
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	s = malloc((height) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j <= i; i--)
			{
				free(s[i]);
			}
			free(s);
		}
		*(*s + i) = 0;
	}

	return (s);
}
