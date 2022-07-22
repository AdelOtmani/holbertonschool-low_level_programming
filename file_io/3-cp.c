#include "main.h"
/**
 * main - check copie
 * @argc: argc
 * @argv: argv
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_source, file_dest, baks, bakd, rd;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_source = open(argv[1], O_RDONLY);
	if (file_source  == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(file_source, buffer, BUFSIZ)) > 0)
		if (file_dest == -1 || (write(file_dest, buffer, rd) != rd))
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (rd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	baks = close(file_source);
	bakd = close(file_dest);
	if (baks == -1 || bakd == -1)
	{
		if (baks == -1)
			fprintf(stderr, "Error: Can't close fd %d\n", file_source);
		else if (bakd == -1)
			fprintf(stderr, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
	return (0);
}
