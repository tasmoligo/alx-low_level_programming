#include <stdio.h>
/**
 * main - prints possible combo of three digit numbers
 * Return: 0
 */
int main(void)
{
	int u = '0';
	int t = '0';
	int h = '0';

	for (h = '0'; h <= '9'; h++)
	{
		for (t = '0'; t <= '9'; t++)
		{
			for (u = '0'; u <= '9'; u++)
			{
				if (!((u == t) || (t == h) || (t > u) || (h > t)))
				{
					putchar(h);
					putchar(t);
					putchar(u);
					if (!(u == '9' && t == '8' && h == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
