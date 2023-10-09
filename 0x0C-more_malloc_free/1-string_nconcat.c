#include "main.h"

unsigned int _len(char *s);

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
	unsigned int i, j, lenStr, s2_len;
	char *ptr;

	s2_len = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s2_len >= _len(s2))
	{
		s2_len = _len(s2);
	}
	lenStr = _len(s1) + s2_len;
	ptr = malloc(lenStr + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _len(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
  * _len - calculates the length of a string
  * @s: the string
  * Return: the length of the string
  */
unsigned int _len(char *s)
{
	unsigned int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
