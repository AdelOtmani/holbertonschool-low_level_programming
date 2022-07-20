#include "main.h"

/**
 * get_bit - Check the code
 * @n: the arg
 * @index: arg
 * Return: val or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}
