#include <stdio.h>

/**
 * main - Entry point
 * return : Always 0 (sucess)
 */

int main(void)
{
	    int a;
		float b;
		long int c;
		long long int d;
		char e;

		printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(e));
		printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(a));
		printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(c));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(d));
		printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(b));
		return (0);
}
