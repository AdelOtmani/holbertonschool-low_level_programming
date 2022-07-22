#include "main.h"
#include <stdlib.h>
/**
 * creat_file - Check the code
 * @filename: arg char
 * @texte_content: arg char
 * Return: nbr of letters
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int o, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, i);
	if (o == -1 || wr == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
