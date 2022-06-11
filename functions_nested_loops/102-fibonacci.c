#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int i;

	printf("1, 2, "); 
	for (i = 0; i < 49; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i < 48)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
