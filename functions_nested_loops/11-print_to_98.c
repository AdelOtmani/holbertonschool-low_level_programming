#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check the code
 * @n: first arg
 * Return: Alwayse 0.
 */

void print_to_98(int n)
{
	while ( n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}	
