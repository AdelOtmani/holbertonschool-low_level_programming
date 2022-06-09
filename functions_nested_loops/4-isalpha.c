#include "main.h"

/**
 * _isalpha - check the code.
 * @c: First operand
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int l = 0;
	char n;

	for (n = 'a'; n <= 'Z'; n++)
	{
		if (n == c)
			l = 1;
	}
	return (l);
}
