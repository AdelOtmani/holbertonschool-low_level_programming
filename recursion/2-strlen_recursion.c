#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: is a pointer char
 * Return: i len
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
