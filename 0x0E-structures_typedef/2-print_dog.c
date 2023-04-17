#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  *print_dog - prints struct dog
  *@d: pointer to struct dog
  *Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age < 0)
		printf("age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("owner: %s\n", (*d).owner);
}
