#include <stdio.h>

/**
  * main - prints its name
  * @argc: number of arguments
  * @argv: argument name
  * Return: on success 0, otherwise, the specified code
  */


int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
