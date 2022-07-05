#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Check the code
 * @argc: number of arg
 * @argv: arg char pointer
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int r;
	int (*s)(int,int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	s = get_op_func(argv[2]);

	if (s == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	r = (*s)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);
	return (0);
}
