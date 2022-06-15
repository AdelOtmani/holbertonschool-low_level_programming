#include "main.h"

/**
 * print_rev - check the code
 * @s: arg is string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int v;
	int c = 0;

	for (v = 0; s[v] != 0; v++)
	{
		c++;
	}
	for (v = c - 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
