#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of the triangle
  * Return: nothing
  */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = size - 1; b >= 0; b--)
		{
			if (b <= a)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
