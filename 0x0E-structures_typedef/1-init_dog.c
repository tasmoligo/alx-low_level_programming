#include <stdio.h>
#include "dog.h"

/**
  * init_dog - initializes the variables
  * @d: the variable
  * @name: the name
  * @age: the age
  * @owner: the owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
