#include "lists.h"

/**
  * _strlen - finds the length of a string
  * @str: the string
  * Return: the length of the string
  */
size_t _strlen(const char *str)
{
	size_t i;
	size_t len = 0;

	for (i =  0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
