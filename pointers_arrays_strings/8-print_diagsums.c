#include "main.h"
#include <stdio.h>
/*
 * print_diagsums - prints sum of diagonal
 * @a: pointer int
 * @size: pointer int
 * Return: printf
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int si = 0;
	int sj = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		si = si + a[i];
	}
	for (j = size - 1; j < (size * size - 1); j = j + size - 1)
	{
		sj = sj + a[j];
	}
	printf("%d, %d\n", si, sj);
}
