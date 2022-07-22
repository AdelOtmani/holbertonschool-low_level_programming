#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Check the code
 * @filename: arg char
 * @letters: arg fnct
 * Return: nbr of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, rd, wr;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	rd = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (o == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	close(o);
	free(buffer);
	return (wr);
}
