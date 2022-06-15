#include "main.h"

/**
 * puts_half - check the code
 * @str: arg is char
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int t = 0;

	for (i = 0; str[i] != 0; i++)
	{
		t++;
	}
	i = i - 1;
	if (t % 2 == 0)
	{
		for (i = (t / 2); i < t; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (t / 2) + 1; i < t; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
