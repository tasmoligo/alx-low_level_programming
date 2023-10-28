#include <stdio.h>

/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, sum;
	int num = 2;

	printf("%lu, %lu, ", n1, n2);
	while (num < 98)
	{
		sum = n1 + n2;
		if (num < 97)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}
		n1 = n2;
		n2 = sum;
		num++;
	}

	return (0);
}
