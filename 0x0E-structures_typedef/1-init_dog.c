#include "dog.h"
/**
  * init_dog - initializes struct dog
  * @d: struct pointer
  * @name: dog name pointer
  * @age:dog age pointer
  * @owner: dog owner pointer
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

