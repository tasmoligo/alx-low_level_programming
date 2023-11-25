#include "main.h"

/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: the number to print to
  * Return: nothing
  */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;

				if (a == n && b == n)
				{
					_putchar(c);
					_putchar('\n');
				}
				else
				{
					_putchar(c);
					_putchar(',');
					_putchar(' ');
					_putchar('\n');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		;
	}
	 _putchar('\n');
}
