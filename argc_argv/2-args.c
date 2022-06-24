#include <stdio.h>
/**
 * main - check the code
 * @argc: arg int
 * @argv: arg is a pointer char
 * Return: Always 0 (sucess)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
