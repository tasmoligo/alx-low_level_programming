#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: the delimiter
  * @n: number of arguments
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	if (separator == NULL)
	{
		separator = "";
	}
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
