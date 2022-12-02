#include "main.h"

/**
  * binary_to_uint - converts from binary to unsigned int
  * @b: a string of binary number
  *
  * Return: the converted number in decimal
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		dec = (b[i] - '0') + 2 * dec;
	}
	return (dec);
}
