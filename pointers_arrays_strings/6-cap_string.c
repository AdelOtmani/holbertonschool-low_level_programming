#include "main.h"
/**
 * *cap_string - check the code
 * @s: arg is a char pointer
 * Return: always 0.
 */
char *cap_string(char *s)
{
	int i, j;
	char a[] = "	, \n\t;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (s[i] == a[j])
				if ( s[i + 1] >= 'a' && s[i - 1] <= 'z')
					s[i + 1] -= 32;
		}
	}
	return (s);
}
