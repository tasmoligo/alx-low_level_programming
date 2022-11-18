#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum of all its parameters
  * @n: the parameter
  *
  * Return: SUM
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int i; SUM;

	va_start(num, n);
	for (i = 0; i < SUM; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		SUM += va_arg(num, int);
	}
	va_end(num);
	return (SUM);
}
