#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: one number
 * @b: the other number
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
