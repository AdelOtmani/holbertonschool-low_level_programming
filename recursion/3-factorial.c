#include "main.h"
/**
 * factorial - check the code
 * @n: is a pointer int
 * Return: no need
 */
int factorial(int n)
{
	int sum = 1;

	if (n == 0)
	{
		return (sum);
	}
	if (n < 0)
	{
		sum = -1;
	}
	if (n > 0)
	{
		sum = n * factorial(n - 1);
	}
	return (sum);
}
