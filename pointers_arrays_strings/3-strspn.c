#include "main.h"
#include <stddef.h>

/**
 * _strspn - check the code
 * @s: arg is char pointer
 * @accept: arg is a char pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int n = 0;
	int y = 0;
	int r = 0;

	while (s[y] != '\0')
	{
		n = 0;
		r = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[y])
			{
				i++;
				r++;
			}
			n++;
		}
		if (r == 0)
			break;
		y++;
	}
	return (i);
}
