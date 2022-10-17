#include <stdio.h>
/**
 * main - prints all possible combo of two digit numbers
 * Return: 0
 */
int main(void)
{
	int u = '0';
	int t = '0';

	for (u = '0'; u <= '9'; u++)
	{
		for (t = '0'; t <= '9'; t++)
		{
			if (!((u == t) || (t > u)))
			{
				putchar(t);
				putchar(u);
				if (!(u == '9' && t == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
