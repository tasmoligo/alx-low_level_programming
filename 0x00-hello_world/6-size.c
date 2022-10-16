#include <stdio.h>
/**
 * main - various type sizes
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu bytes(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long));
	printf("Size 0f long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
