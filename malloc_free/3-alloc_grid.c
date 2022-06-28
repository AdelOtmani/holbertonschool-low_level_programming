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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc((height) * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * height);
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
			return (NULL);
		}
		
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
