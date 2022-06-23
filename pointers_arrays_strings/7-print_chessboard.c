#include <stdlib.h>
#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: pointer char
 * @needle: pointer char
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
