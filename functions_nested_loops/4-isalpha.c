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
	char m;

	for (n = 'a'; n <= 'z'; n++)
	{
		for (m = 'A'; m <= 'Z'; m++)
		{
			if (n == c || m == c)
				l = 1;
		}
	}
	return (l);
}
