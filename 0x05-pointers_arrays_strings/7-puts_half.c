#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: the string to print
  * Return: nothing
  */
void puts_half(char *str)
{
	int i = 0, half;

	while (str[i] != '\0')
	{
		i++;
	}
	half = (i + 1) / 2;
	i = half;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
