#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - initializes a variable of type struct dog
  *@d: pointer to struct dog
  *@name: pointer to the dog name
  *@age: the dog's age
  *@owner: pointer to the dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
