#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array
  * @array: pointer to an array
  * @size: size of the array
  * @action: pointer to the function to use
  * Return: Nothing
  */
void array_iterator(int array, size_t size, void (action)(int))
{
	unsigned int index;

	if (action && array != NULL && size != 0)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
