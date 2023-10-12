#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: the array of integers
* @size: array size
* @cmp: pointer to the function to be used to compare values
* Return: index of the first element for which the cmp function
*		does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp && array)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}

	return (-1);
}
