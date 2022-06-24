#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: arg int
 * @argv: arg is a pointer char
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;

	if (argc != 3)
	{
		printf("Error");
		exit(0);
	}
	printf("%d\n", res);
	return (0);
}
