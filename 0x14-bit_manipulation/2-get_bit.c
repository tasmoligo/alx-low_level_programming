#include "main.h"

/**
  * get_bit - gets the value of a bit at a given index.
  * @n: the number
  * @index: the given index
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	n >>= index;

	return (n & 1);
}
