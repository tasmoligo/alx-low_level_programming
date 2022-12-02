#include <string.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
int main(void)
{
	unsigned int n;

	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	return (0);
}
/**
  * binary_to_uint - converts from binary to unsigned int
  * @b: a string of binary number
  *
  * Return: the converted number in decimal
  */
unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int total = 0;
	unsigned int dec = 1;

	for (int i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += dec;
			dec *= 2;
		}
	}
	return (total);
}
