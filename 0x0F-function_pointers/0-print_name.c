#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Person's name
 * @f: A pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}