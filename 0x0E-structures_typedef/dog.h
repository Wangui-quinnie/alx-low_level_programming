#ifndef DOG_H
#define DOG_H

/**
  *struct dog - a data type describing a dog
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

/**
  *dog_t - type for struct dog
  *
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
