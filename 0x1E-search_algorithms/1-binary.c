#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *      using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index where value is located, OR -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int i, beg, mid, end;

	if (!array)
		return (-1);
	beg = 0;
	end = size - 1;

	while (beg <= end)
	{
		i = beg;
		mid = (beg + end) / 2;
		printf("Searching in array: ");
		while (i <= end)
		{
			if (i == end)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
			i++;
		}
		if (array[mid] < value)
		{
			beg = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
