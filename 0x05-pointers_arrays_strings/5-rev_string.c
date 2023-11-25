#include "main.h"

/**
  * rev_string - prints a string in reverse
  * @s: the string to print
  * Return: nothing
  */
void rev_string(char *s)
{
	int i = 0, j = _strlen(s) - 1;
	char c;

	if (!s)
	{
		return;
	}
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
