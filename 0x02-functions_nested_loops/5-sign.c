#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the number
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
