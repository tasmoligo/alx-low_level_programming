#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * 	using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 * 	OR -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t beg = 0, end = size;
	size_t jump = sqrt(size);
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = beg; i < end; i += jump)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] > value || i + jump >= size)
		{
			int result = linear_search(array + i - jump, jump, value);
			if (result)
				return (i - jump + result);
		}
		else
			return (-1);
	}
	return (-1);
}
