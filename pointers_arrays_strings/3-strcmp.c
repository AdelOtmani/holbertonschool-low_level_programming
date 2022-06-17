#include "main.h"
#include <stdio.h>
/**
 * _strcmp - check the code
 * @s1: arg is a pointer
 * @s2: arg is a pointer
 * Return: always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	{
		return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}


