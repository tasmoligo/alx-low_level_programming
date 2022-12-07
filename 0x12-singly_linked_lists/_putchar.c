#include "lists.h"

/**
  * _putchar _ prints character to stdout
  * @c: the character to print
  *
  * Return: 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
