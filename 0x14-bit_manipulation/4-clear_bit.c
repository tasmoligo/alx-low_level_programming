#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: pointer to the bit
  * @index: the given index
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= 32)
	{
		return (-1);
	}
	num = 1 << index;
	num = ~num;
	*n &= num;

	return (1);
}
