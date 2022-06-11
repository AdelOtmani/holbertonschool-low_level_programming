
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	double a = 1;
	double b = 2;
	double c;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf("%.0lf", c);
		if (i < 95)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
