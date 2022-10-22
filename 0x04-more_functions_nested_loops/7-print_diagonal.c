#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the number of times "\" is printed
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 9; a < n; a++)
	{
		for (b = 0; b < n; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
