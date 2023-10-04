#include "main.h"

/**
  * _strdup - duplicates a string
  * @str: the string to duplicate
  *
  * Return: On success, a pointer to the duplicated string.
  *	    NULL if insufficient memory was allocated
  */
char *_strdup(char *str)
{
	int index, length = 0;
	char *str_copy;

	for (index = 0; str[index] != '\0'; index++)
	{
		length++;
	}
	str_copy = malloc(sizeof(char) * length);
	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index] != '\0'; index++)
	{
		str_copy[index] = str[index];
	}
	return (str_copy);
}
