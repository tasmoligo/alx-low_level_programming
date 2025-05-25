#include <stdio.h>
/**
 * main - prints combo of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int a = 48;

	do {
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	} while (a < 58);
	putchar('\n');
	return (0);
}
