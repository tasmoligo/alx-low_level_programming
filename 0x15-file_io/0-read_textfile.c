#include "main.h"

/**
  * read_textfile - reads a text file and prints it to standard output
  * @filename: the file to read from
  * @letters: the number of letters it should read and print
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(o);
		return (0);
	}
	r = read(o, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	if (w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (w);
}

