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
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	r = read(STDIN_FILENO, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	o = open(filename, O_RDONLY);
	if (r == -1 || w == -1 || o == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}

