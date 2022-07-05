#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- check the code
 * @format: char pointer arg
 */
void print_all(const char * const format, ...)
{
	int i;
	char *c;
	int *n;
	float *v;
	va_list args;

	va_start(args, format);
	while (*(format + i) != '\0' && format != NULL)
	{
		c = va_arg(args, char *);
		n = va_arg(args, int *);
		v = va_arg(args, float *);
		switch (*(format + i))
		{
			case 'c': 
				printf("%c", *n);
				break;
			case 'i':
				printf("%i", *n);
				break;
			case 'f':
				printf("%f", *v);
				break;
			case 's':
				c = (c != NULL) ? c : "(nil)";
				printf("%s", c);
				break;
			default:
				i++;
				continue;
		}
		if (*(format + 1 + i) != 0)
		{
			printf(", ");
		}
		i++;
	}
	putchar(10);
	va_end(args);
}
