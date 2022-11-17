#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @size: size of array
 * @action: pointer to the function
 * @array: the array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
