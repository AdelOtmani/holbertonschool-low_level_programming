#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: arg int
 * @argv: arg is a pointer char
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int resultat = 0;
	int i;
	int j;

	argc--;
	argv++;


	for (i = 0; argc > 0; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		resultat += atoi(argv[i]);
		argc--;
	}
	printf("%d\n", resultat);
	return (0);
}
