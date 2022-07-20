#include "main.h"
/**
 * clear_bit - Check the code
 * @n: arg pointer
 * @index: arg
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
