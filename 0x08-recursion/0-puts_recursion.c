#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i;
	char str[];

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str);
	_putchar('\n');
}
