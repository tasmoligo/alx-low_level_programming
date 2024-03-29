#include "dog.h"

/**
  * free_dog - frees dogs
  * @d: pointer to struct dog
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
