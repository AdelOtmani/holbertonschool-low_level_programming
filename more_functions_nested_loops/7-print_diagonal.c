#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: first arg
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
