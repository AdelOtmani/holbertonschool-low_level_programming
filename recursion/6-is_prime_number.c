#include "main.h"
/**
 * is_prime_number_check - check the code
 * @n: is an int
 * @m: is an int
 * Return: Always 0.
 */
int is_prime_number_check(int n, int m)
{
	if (m % n == 0 || m < 2)
		return (0);
	if (n > m / 2)
		return (1);
	return (is_prime_number_check(n + 1, m));
}
/**
 * is_prime_number - check the code
 * @n: is an int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (is_prime_number_check(2, n));
}
