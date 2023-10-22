#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the number of times "\" is printed
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (b == a)
			{
				_putchar('\\');
			}
			else if (b > a)
			{
				;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
