#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n:the number
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l += -1;
	_putchar(l + '0');
	return (0);
}
