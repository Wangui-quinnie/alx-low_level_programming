#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - frees dogs
  *@d: pointer to struct dog_t
  */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
