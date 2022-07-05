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
	va_list args;

	va_start(args, format);
	while (*(format + i) != '\0' && format != NULL)
	{
		c = va_arg(args, char *);
		switch (*(format + i))
		{
			case 'c':
					printf("%c", va_arg(args, int));
					break;
			case 'i':
					printf("%i", va_arg(args, int));
					break;
			case 'f':
					printf("%f", va_arg(args, double));
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
