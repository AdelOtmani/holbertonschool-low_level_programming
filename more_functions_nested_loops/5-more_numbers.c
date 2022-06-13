#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int u = 0;
	int s = 0;

	while (s <= 9)
	{
		while (u <= 14)
		{
			if (u > 9)
				_putchar(u / 10 + '0');
			_putchar(u % 10 + '0');
			u++;
		}
	_putchar('\n');
	s++;
	u = 0;
	}
}
