#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Chek the code
 * @grid: double pointer
 * @height: is an int
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
