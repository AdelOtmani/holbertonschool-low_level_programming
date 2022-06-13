#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code.
 * @n: first arg
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
