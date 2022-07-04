#include "function_pointers.h"
/**
 * print_name - Check the code
 * @name: char arg pointer
 * @f: void pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return (NULL);
	}
	f(name);
}
