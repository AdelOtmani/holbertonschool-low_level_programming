#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	float a = 1;
	float b = 2;
	float c;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		c = floor(a) + floor(b);
		printf("%.0f", floor(c));
		if (i < 95)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
