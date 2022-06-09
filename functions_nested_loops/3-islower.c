#include "main.h"

/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int l = 0;
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == c)
			l = 1;
	}
	return (l);
}
