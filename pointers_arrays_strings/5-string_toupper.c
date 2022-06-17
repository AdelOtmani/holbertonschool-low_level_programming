#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - check the code
 * @s: arg is a char pointer
 * Return: always 0.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
	}
	return (s);
}
