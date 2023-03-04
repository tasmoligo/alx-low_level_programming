#include "main.h"
/**
  * cap_string - capitalizes all words of a string.
  * @str: the string
  * Return: the string
  */
char *cap_string(char *str)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		j = 0;
		while (separator[j] != '\0')
		{
			if (str[i] == separator[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
			j++;
		}
		i++;
	}
	return (str);
}
