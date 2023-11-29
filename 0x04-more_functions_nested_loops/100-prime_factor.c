#include <stdio.h>

/**
 * largest_prime - finds the largest prime factor of a number
 * @number: the number
 * Return: the largest prime factor
 */
long int largest_prime(long int number)
{
	long int i = 2;

	while (i * i <= number)
	{
		if (number % i == 0)
		{
			number /= i;
		}
		else
		{
			i++;
		}
	}

	return (number);
}

/**
 * main - Driver code
 * Return: 0 on success
 */
int main(void)
{
	long int number = 612852475143;

	printf("%ld\n", largest_prime(number));

	return (0);
}
