#include <unistd.h>

/**
  * _putchar - prints character to stdout
  * @c: the character
  *
  * Return: the character
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
