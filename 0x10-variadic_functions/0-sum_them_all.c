#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum all its parameters
  * @n: the number of parameters
  *
  * Return: SUM
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, SUM;

	va_start(ap, n);
	SUM = 0;
	for (i = 0; i < n; i++)
		SUM += va_arg(ap, int);
	va_end(ap);
	return (SUM);
}
