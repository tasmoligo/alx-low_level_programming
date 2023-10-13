#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: the delimiter
  * @n: number of arguments
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);
	if (separator == NULL)
	{
		separator = "";
	}
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
