#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all args it receives
 * @argc: number of args
 * @argv: args names
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
