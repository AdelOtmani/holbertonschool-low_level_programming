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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;
	printf("%d\n", res);
	return (0);
}
