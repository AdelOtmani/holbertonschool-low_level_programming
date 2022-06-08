#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char word[8] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
