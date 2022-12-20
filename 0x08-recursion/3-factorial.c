#include "main.h"

/**
  * factorial - finds the factorial of a number
  * @n: the number
  *
  * Return: the factorial of a numbeer
  */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
