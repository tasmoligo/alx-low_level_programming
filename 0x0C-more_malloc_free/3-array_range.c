#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: first element of array
  * @max: last element of array
  * Return: the pointer to the newly created array
  *		or, NULL on failure
  */
int *array_range(int min, int max)
{
	int index, arr_size, *array;

	arr_size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * arr_size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < arr_size; index++, min++)
	{
		array[index] = min;
	}
	return (array);
}
