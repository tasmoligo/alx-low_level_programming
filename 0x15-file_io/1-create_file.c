#include "main.h"

/**
  * create_file - creayes a file and sets appropriate permissions
  * @filename: name of file to create
  * @text_content : content of filename
  * Return: 1 on success. -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, letters, bytes_written;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (letters = 0; text_content[letters] != '\0'; letters++)
	{
		;
	}
	bytes_written = write(fd, text_content, letters);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
