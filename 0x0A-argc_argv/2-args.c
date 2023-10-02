#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: number of arguments
  * @argv: argument name
  * Return: on success 0, otherwise, the specified code
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
