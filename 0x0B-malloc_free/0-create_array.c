#include "main.h"

/**
  * create_array - creates an array of chars,
  *	and initializes it with a specific char.
  * @size: the size of the array
  * @c: the character to print
  *
  * Return: a pointer to the array on success, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *string;

	string = malloc(sizeof(char) * size);
	if (string == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		string[index] = c;
	}
	return (string);
}
