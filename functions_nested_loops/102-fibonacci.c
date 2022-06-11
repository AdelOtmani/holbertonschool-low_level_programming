#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i < 47)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
