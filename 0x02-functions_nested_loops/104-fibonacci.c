#include <stdio.h>

/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, num = 0, sum = n1 + n2;

	printf("%lu, %lu, ", n1, n2);
	while (num < 96)
	{
		if (num != 95)
		{
			printf("%lu, ", sum);
			n1 = n2;
			n2 = sum;
			sum = n1 + n2;
		}
		else
		{
			printf("%lu\n", sum);
		}
		num++;
	}

	return (0);
}
