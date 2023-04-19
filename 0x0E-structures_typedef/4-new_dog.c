#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *roman;
	char *name_copy, *owner_copy;
	int len_1, len_2;

	roman = malloc(sizeof(dog_t));
	if (roman == NULL)
		return (NULL);
	len_1 = strlen(name);
	name_copy = malloc(len_1 + 1);
	if (name_copy == NULL)
	{
		free(roman);
		return (NULL);
	}
	strcpy(name_copy, name);
	len_2 = strlen(owner);
	owner_copy = malloc(len_2 + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(roman);
		return (NULL);
	}
	strcpy(owner_copy, owner);
	roman->name = name_copy;
	roman->age = age;
	roman->owner = owner_copy;
	return (roman);
}
