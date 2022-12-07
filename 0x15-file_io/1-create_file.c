#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of file to create
  * @text_content: string to write to the file
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	for (i = 0; text_content[i]; i++)
	{
		;
	}
	w = write(o, text_content, i);
	if (w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}

