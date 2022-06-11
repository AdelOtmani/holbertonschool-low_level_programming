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
	long sum = 2;

	while (a + b < 4000000)
	{
		c = a + b;
		if (c % 2)
			sum += c;

		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
