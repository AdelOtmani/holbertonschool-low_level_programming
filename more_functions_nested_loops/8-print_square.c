#include <stdio.h>
#include "main.h"

/**
 * print_square - check the code.
 * @n: first arg
 * Return: Always 0.
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
		_putchar('\n');
		i++;
		j = 0;
		}
	}
	else
	_putchar('\n');
}
