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

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[length] != '\0'; index++)
	{
		length++;
	}

	str_copy = malloc((sizeof(char) * length) + 1);
	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < length; index++)
	{
		str_copy[index] = str[index];
	}
	str_copy[length] = '\0';
	
	return (str_copy);
}
