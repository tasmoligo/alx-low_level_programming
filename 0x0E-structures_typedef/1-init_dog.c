#include "dog.h"

/**
  * init_dog - initializes a dog struct
  * @d: the pointer to the struct members
  * @name: the name of the dog
  * @age:the age of the dog
  * @owner: the owner of the dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
