#include "main.h"
/**
 * print_last_digit - check the code.
 *@r: value variable
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int a = r % 10;

	if (a < 0)
		a *= -1;
	_putchar((a % 10) + '0');
	return (a);
}
