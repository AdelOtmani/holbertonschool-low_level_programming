#include "main.h"

/**
 * main - check the code
 * Description: It prints the alphabet with a new line
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
