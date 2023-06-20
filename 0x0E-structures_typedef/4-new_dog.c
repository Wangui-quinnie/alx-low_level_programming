#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  *_strlen - finds the string  length
  *@s: the string
  *Return: string length
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  *_strcpy - copies a string
  *@src: string to be copied from
  *@dest: string to be copied into
  *Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
  *new_dog - creates a new dog
  *@name: name of the dog
  *@age: the dog's age
  *@owner: the dog's owner
  *Return: pointer to the new dog or NULL on failure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);
	return (new_dog);
}

