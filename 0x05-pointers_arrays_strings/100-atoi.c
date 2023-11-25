#include "main.h"

/**
  * _atoi - converts string to integer
  * @s: the sting to convert
  * Return: thehm converted string
  */
int _atoi(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '48' && s[i] <= '57')
		{
			c = s[i];
		}
		else
		{
			return (0);
		}
	}

	return (c);
}
