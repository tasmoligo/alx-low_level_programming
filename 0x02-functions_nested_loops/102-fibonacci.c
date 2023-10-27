#include <stdio.h>

/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	unsigned int n1 = 1, n2 = 2, num, sum = n1 + n2;

	printf("%d, %d, ", n1, n2);
	while (num < 48)
	{
		if (num != 47)
		{
			printf("%d, ", sum);
			n1 = n2;
			n2 = sum;
			sum = n1 + n2;
		}
		else
		{
			printf("%d\n", sum);
		}
		num++;
	}

	return (0);
}
