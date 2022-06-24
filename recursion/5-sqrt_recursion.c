#include "main.h"
/**
 * sqrt_check - check the code
 * @a: is an int
 * @b: is an int
 * Return: Always 0.
 */
int sqrt_check(int a, int b)
{
	if (a * a > b)
		return (-1);
	if (a * a == b)
		return (a);
	return (sqrt_check(a + 1, b));

}
/**
 * _sqrt_recursion - check the code
 * @n: is an int
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
