#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check the code.
 * @c: First operand
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int l = 0;
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == c)
			l = 1;
	}
	return (l);
}
