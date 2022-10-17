#include <stdio.h>
/**
 * main - prints different combo of two digits
 * Return: 0
 */
int main(void)
{
	int u = '0';
	int t = '9';

	for (t = '0'; t <= '9'; t++)
	{
		for (u = '0'; u <= '9'; u++)
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
