#include "main.h"
/**
 * append_text_to_file - Check the code
 * @filename: arg char
 * @text_content: arg char
 * Return: (1) if sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, o, w;

	if (filename)
	{
		return (-1);
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
