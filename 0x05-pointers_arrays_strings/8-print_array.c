#include "main.h"
/**
  * print_array - prints n elements of an array of integers
  * @a: the array of integers
  * @n: the number of elements in the array
  * Return: nothing
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
