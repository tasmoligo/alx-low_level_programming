#include <stdio.h>
/**
 * main - prints all single digit numbers of base ten starting from zero
 * Return: 0
 */
int main(void)
{
	int n;

	for (n == 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
