#include "dog.h"
#include <stdlib.h>
/**
  * free_dog -free mem allocation
  * @d: struct to be freed
  */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
