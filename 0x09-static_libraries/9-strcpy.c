#include "main.h"
/**
  * _strcpy -  copies the string pointed to by src
  *  to the buffer pointed to by dest.
  * @dest: buffer to copy to
  * @src: buffer to copy from
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
