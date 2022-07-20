#include "main.h"

/**
 * set_bit - Check the code
 * @n: Arg pointer
 * @index: arg
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n ^ (1 << index);

	return (1);
}
