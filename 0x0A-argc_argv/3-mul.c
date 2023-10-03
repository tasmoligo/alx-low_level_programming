#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: number of arguments
  * @argv: argument name
  * Return: on success 0, otherwise, the specified code
  */
int main(int argc, char **argv)
{
	int mul;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	return (0);
}
