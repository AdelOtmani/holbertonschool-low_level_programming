#include "main.h"
#include <stdio.h>
/**
 * print_times_table - check the code
 * @n:	int	arg
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int a;
	int b;
	int r;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			r = a * b;
			if (b != 0)
				printf("%4d", r);
			else
				printf("%d", r);
			if (b != n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
