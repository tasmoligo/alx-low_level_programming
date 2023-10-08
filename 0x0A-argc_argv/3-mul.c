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

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
