#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
