#include "main.h"

/**
 * puts2 - check the code
 * @str: arg is string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int t = 0, s;

	for (s = 0; str[s] != 0; s++)
		t++;
	for (s = 0; s < t; s += 2)
		_putchar(str[s]);
	_putchar('\n');
}
