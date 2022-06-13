#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check the code.
 * @size: first arg
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				if (size - j - 1 > i)
					_putchar (' ');
				else
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
