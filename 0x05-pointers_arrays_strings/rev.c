#include "main.h"

/**
  * rev_string - prints a string in reverse
  * @s: the string to print
  * Return: nothing
  */
void rev_string(char *s)
{
	int i = 0, j = _strlen(s) - 1;
	char *str;

	if (!s)
	{
		return;
	}
	while (i < j)
	{
		*str[i++] = s[j--];
	}
}
