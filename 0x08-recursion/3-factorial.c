#include "main.h"

/**
  * factorial - prints the factoial of a number
  * @n: the number
  * Return: On success, the factorial, -1 on error
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
