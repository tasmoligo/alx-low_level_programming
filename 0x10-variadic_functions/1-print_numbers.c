#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers to stdout
  * @separator: the string to print between numbers
  * @n: number of integers passed to the function
  *
  * Return: 1 on success
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num, i;
	char str[] = "separator";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
			num = va_arg(ap, int);
		va_end(ap);
	}
	putchar('\n');
}
