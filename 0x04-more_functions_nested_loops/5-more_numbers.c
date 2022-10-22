#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int num, x;

	for (x = 0; x < 10; x++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
