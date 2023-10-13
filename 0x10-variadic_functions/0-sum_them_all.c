#include "variadic_functions.h"

/**
  * sum_them_all - sums of all its parameters
  * @n: the first parameter
  * Return: sum of the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
