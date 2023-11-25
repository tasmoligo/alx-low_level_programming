#include "main.h"

/**
  * read_textfile - reads a text file and prints
  *		it to the POSIX standard output.
  * @filename: file it should read from
  * @letters: number of letters it should read and print
  * Return: actual number of letters it could read and print,
  *	0 on failure
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
	{
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}

	close(fd);
	free(buff);
	return (bytes_written);
}
