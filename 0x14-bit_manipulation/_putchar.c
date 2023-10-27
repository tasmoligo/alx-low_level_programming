#include <unistd.h>

/**
  * _putchar - prints character to stdout
  * @c: the character to print
  * Return: number of characters printed
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
