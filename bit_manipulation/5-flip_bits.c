#include "main.h"
/**
 * flip_bits - Check the code
 * @n: arg int
 * @m: arg int
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int i;

	for (i = 0; xor > 0;)
	{
		i += (xor & 1);
		xor >>= 1;
	}

	return (i);
}
