#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	int index = 0, jump_index = 0, beg = index;
	int block = sqrt(size);
	int resize = (int)size;

	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < resize && array[index] < value; index =
			jump_index * block)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		jump_index++;
		beg = index;
	}
	printf("Value found between indexes [%d] and [%d]\n", beg, index);
	for (; beg <= index && beg < resize; beg++)
	{
		printf("Value checked array[%d] = [%d]\n", beg, array[beg]);
		if (array[beg] == value)
		{
			return (beg);
		}
	}
	return (-1);
}
