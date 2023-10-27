#include "main.h"

/**
  * flip_bits - the number of bits you would need to flip
  *	to get from one number to another.
  * @n: the first number
  * @m: the second number
  * Return: the number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = n ^ m;
	unsigned int i;

	for (i = 0; num != 0; num >>= 1)
	{
		if (num & 1)
		{
			i++;
		}
	}

	return (i);
}
