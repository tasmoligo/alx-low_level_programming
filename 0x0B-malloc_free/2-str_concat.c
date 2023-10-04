#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: the first string
  * @s2: the second string
  *
  * Return: a pointer to the NULL terminated concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int i, k, str_len = 0;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		str_len++;
	}
	str_len++;
	concat_str = malloc(sizeof(char) * str_len);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat_str[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0'; i++, k++)
	{
		concat_str[i] = s2[k];
	}
	concat_str[i] = '\0';
	return (concat_str);
}
