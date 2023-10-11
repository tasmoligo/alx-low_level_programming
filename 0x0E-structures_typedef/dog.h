#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - the dog structure
  * @name: the pointer to locate the dog's name
  * @age: member to hold the dog's age
  * @owner: the pointer to locate the dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - Typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* _DOG_H_ */
