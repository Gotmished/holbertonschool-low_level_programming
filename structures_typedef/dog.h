#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: the dog's name
 * @owner: the dog's owner
 * @age: the dog's age
 */

struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
