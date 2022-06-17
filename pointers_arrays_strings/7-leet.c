#include "main.h"
/**
 * leet - check the code
 * @s: arg is a char pointer
 * Return: always 0.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "AEOTL43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || (s[i] - 32) == a[j])
				s[i] = a[j + 5];
		}
	}
	return (s);
}
