#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, const char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
  * _strlen - prints the length of the string
  * @str: the string to be counted
  *
  *Return: length of string
  */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
  * _strcpy - copies string from source to destination
  * @src: the source
  * @dest: the destination
  *
  * Return: copy of string
  */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * new_dog - creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: new dog details
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
	{
		return (NULL);
	}
	dawg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dawg->name == NULL)
	{
		free(dawg);
		return (NULL);
	}
	dawg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dawg->owner == NULL)
	{
		free(dawg->owner);
		free(dawg);
		return (NULL);
	}
	dawg->name = _strcpy(dawg->name, name);
	dawg->age = age;
	dawg->owner = _strcpy(dawg->owner, owner);
	return (dawg);
}
