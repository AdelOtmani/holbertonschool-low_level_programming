#include "main.h"

/**
 * rev_string - check the code
 * @s: arg is string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int d;
	int f;
	int c = 0;
	char a;

	for (i = 0; s[i] != 0; i++)
	{
		c++;
	}
	f = c - 1;
	for (d = 0; d < (c / 2); d++)
	{
		a = s[d];
		s[d] = s[f];
		s[f] = a;
		f--;
	}
}
