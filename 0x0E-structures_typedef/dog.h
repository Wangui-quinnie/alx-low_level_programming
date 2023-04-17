#ifndef DOG_H
#define DOG_H

/**
  *struct dog - a structure representing a dog
  *@name: name of the dog
  *@age: the age of the dog
  *@owner: the dog's owner
  *Description: This structure is about a dog, it's name(char), age(float) 
  *and owner(char)
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
