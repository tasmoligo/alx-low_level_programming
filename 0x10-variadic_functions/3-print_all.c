#include "print_all.h"

/**
  * print_char - prints character to stdout
  * @ap: argument pointer to char
  */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, char);
	printf("%c", c);
}

/**
  * print_int - prints integer
  * @ap: argument pointer to int
  */
void print_int(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	printf("%d", i);
}

/**
  * print_float - prints float to stdout
  * @ap: argument pointer to float
  */
void print_float(va_list ap)
{
	float f;

	f = va_arg(ap, float);
	printf("%f", f);
}

/**
  * print_string - prints string to stdout
  * @ap: argument pointer to dtring
  */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);
	printf("%s", s);
}

/**
  * print_all - prints all to stdout
  * @format: list of types of arguments passed to the function
  */
void print_float(va_list ap)
{
void print_all(const char * const format, ...)
{
	va_list ap;
