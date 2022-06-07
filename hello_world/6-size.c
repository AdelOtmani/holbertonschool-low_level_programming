#include <stdio.h>

/**
 * main - Entry point
 * return : Always 0 (sucess)
 */

void main(int)
{
	    int inttype;
		float floattype;
		long int longtype;
		long long int llt;
		char chartype;

		printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(chartype));
		printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(inttype));
		printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(longtype));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(llt));
		printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(floattype));
		return (0);
}
