#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s: is a pointer char
 * Return: no need
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s)
	}
	else
	{
		_putchar('\n');
	}
}
