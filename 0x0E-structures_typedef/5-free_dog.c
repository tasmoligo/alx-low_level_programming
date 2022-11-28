#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees the dog
  * @d: the dog to frere
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
