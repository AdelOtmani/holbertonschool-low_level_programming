#include "main.h"
/**
 * _pow_recursion - check the code
 * @x: is an int
 * @y: arg int
 * Return: no need
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
