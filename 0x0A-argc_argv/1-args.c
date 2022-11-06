#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: arguments name
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
