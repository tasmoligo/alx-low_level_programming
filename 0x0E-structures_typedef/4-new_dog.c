#include "dog.h"

int _len(char *str);

/**
  * new_dog - creates a new dog
  * @name: the dog name
  * @age: the dog age
  * @owner: the dog owner
  * Return: pointer to the newly created dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int n = _len(name);
	int o = _len(owner);
	int i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * n + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	i = 0;
	while (i < n)
	{
		new_dog->name[i] = name[i];
		i++;
	}

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * o + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	i = 0;
	while (i < o)
	{
		new_dog->owner[i] = owner[i];
		i++;
	}
	return (new_dog);
}

/**
  * _len - finds the length of a string
  * @str: the string whose length to find
  * Return: the length of the string
  */
int _len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
