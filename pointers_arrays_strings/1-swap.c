#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 * @a: arg is a pointer
 * @b: arg is a pointer too
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
