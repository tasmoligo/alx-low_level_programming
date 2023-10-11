#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: pointer to the name variable
  * @f: pointer to the function
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
