#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @c: counts arguments
 * @v: the argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
