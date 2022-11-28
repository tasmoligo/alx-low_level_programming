#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - a new typr that performs operations
  * @name: the name
  * @age: the age
  * @owner: the owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - the new type
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
