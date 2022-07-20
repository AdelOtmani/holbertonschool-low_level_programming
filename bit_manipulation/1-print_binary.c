#include "main.h"
#include <stdlib.h>
/**
 * print_binary - Check the code
 * @n: arg unsigned long int
 * Return: nothing void
 */

void print_binary(unsigned long int n)
{
		if (n > 1)
					print_binary(n >> 1);

			_putchar((n & 1) + '0');
}
