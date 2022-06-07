#include <stdio.h>

/**
 * main - Entry void
 * return : 0 (sucess)
 */

int main(void)
{
	    int inttype;
		float floattype;
		long int longtype;
		long long int longlongtype;
		char chartype;

		printf("Size of int: %lu bytes\n", (unsigned)sizeof(inttype));
		printf("Size of float: %lu bytes\n", (unsigned)sizeof(floattype));
		printf("Size of long int: %lu bytes\n", (unsigned)sizeof(longtype));
		printf("Size of char: %lu byte\n", (unsigned)sizeof(charType));
		printf("Size of a long long int: %lu bytes\n", (unsigned)sizeof(longlongtype));
		return (0);
}
