#include <stdio.h>

/**
 * main - Entry point
 * return : 0 (sucess)
 */

int main(void)
{
	    int inttype;
		float floattype;
		long int longtype;
		long long int llt;
		char chartype;

		printf("Size of char: %lu byte(s)\n", (unsigned int)sizeof(chartype));
		printf("Size of int: %lu byte(s)\n", (unsigned int)sizeof(inttype));
		printf("Size of long int: %lu byte(s)\n", (unsigned int)sizeof(longtype));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(llt));
		printf("Size of float: %lu byte(s)\n", (unsigned int)sizeof(floattype));
		return (0);
}
