#include "main.h"
#include <stdio.h>
/**
 * reverse_array - check the code
 * @a: arg is a pointer
 * @n: arg is an int
 * Return: always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int v;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		v = a[i];
		a[i] = a[j];
		a[j] = v;
	}
}
