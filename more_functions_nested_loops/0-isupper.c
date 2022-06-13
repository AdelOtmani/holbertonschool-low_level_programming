#include <stdio.h>
#include "main.h"

/**
 * _isupper - check the code.
 * @c: First operand
 * Return: Always 0.
 */
int _isupper(int c)
{
	int l = 0;
	char n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (n == c)
			l = 1;
	}
	return (l);
}
