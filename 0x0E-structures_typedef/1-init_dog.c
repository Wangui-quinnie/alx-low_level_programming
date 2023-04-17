#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - initializes a variable of type struct dog
  *@name: name of the dog
  *@age: the dog's age
  *@owner: the dog's owner
  *@d: a pointer to struct dog
  *Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
