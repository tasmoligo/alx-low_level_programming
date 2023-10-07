#include "main.h"

/**
  * _len - calculates the length of a string
  * @s: the string
  * Return: the length of the string
  */
int _len(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}

/**
  * string_nconcat - concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * @n: the length of s2 to concatenate
  * Return: a pointer to the newly allocated space that contains s1 and s2,
  *		or NULL on failure
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lenStr;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lenStr = _len(s1) + _len(s2);
	ptr = malloc(sizeof(char) * lenStr);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	if (n == 0)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			ptr[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++, i++)
		{
			ptr[i] = s2[j];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
