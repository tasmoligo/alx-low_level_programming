#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  * sum_them_all - sum all its parameters
  * @n: the number parameters
  *
  * Return: SUM
  */
int sum_them_all(const unsigned int n, ...)
{
	int i, SUM;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			exit(0);
		}
		SUM += va_arg(ap, int);
	}
	va_end(ap);
	return (SUM);
}
