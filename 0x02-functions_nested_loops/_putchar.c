#include "main.h"
#include <unistd.h>

/**
 * _putchar - displays character to standard output
 * @c: The character to print
 * Return: 1 on success
 * 	   On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
