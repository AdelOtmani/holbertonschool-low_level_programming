#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - check the code
 * @n: int arg
 * Return: r
 */
int sum_them_all(const unsigned int n, ...)
{
	int r = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		r += (int) va_arg(args, int);
	}
	va_end(args);
	return (r);
}
