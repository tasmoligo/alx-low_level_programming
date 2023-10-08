#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: the number of elements in the array
  * @size: the elements' size in byte(s)
  * Return: a pointer to the allocated memory, or, NULL on failure
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index = 0;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (index < (nmemb * size))
	{
		array[index] = 0;
		index++;
	}
	return (array);
}
