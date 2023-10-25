#include "lists.h"

/**
  * _strlen - finds the length of a string
  * @str: the string
  * Return: the length of the string
  */
int _strlen(const char *str)
{
	int i;
	int len = 0;

	for (i =  0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
