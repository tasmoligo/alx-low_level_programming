#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - the dog structure
  * @nane : the pointer to locate the dogs n' ame
  * @owner : the pointer to locate the dogs ' owner
  * @age : member to hold the dogs a' ge
  *
  * Description: This structure holds the identity of a dog.
  * 		With it, the name, age and owner of the dog can be known.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
  * dog_t- Typedef for struct dog
  */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* _DOG_H_ */
