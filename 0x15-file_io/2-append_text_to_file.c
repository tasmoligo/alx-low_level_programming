#include "main.h"

/**
  * append_text_to_file - appends a text at the end of a file
  * @filename: name of file to append
  * @text_content: text to append at the end of the file
  *
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		w = write(o, text_content, i);
		if (w == -1)
		{
			return (-1);
		}
	}
	close(o);
	return (1);
}
