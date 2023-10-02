#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: number of arguments
  * @argv: argument name
  * Return: on success 0, otherwise, the specified code
  */
int main(int argc, char **argv)
{
	int i, count;

	(void) *argv;
	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			count++;
		}
		printf("%i\n", count);
	}
	return (0);
}
