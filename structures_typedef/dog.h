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

/**
 * dog_t - a new name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
