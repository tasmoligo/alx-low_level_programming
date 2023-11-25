#include "main.h"

/**
  * is_prime_number - checks if a number is a prime number
  * @n: the number to check
  * Return: 1 if prime, else 0
  */
int is_prime_number(int n)
{
	if ((n % n == 0 && n % n - 1 == 0) || (n % n  - 1 == 0))
	{
		return (0);
	}
	return (1);
}
