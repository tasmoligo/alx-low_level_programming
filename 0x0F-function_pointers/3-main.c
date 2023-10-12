#include "3-calc.h"

/**
  * main - Entry point
  * @argv: argument vector
  * @argc: argument count
  * Return: Always 0 (successful)
  */

int main(int argc, char **argv)
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	int res;

	int (*op_func())(int, int) = get_op_funca(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0)
		&& num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op_func(n1, n2);
	printf("%d\n", res);

	return (0);
}
