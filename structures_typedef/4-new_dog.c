#include <stdlib.h>
#include "dog.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of a string
 * @str: the string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}

	a = malloc(sizeof(*str) * i + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < i)
	{
		a[j] = str[j];
		j = j + 1;
	}
	return (a);
}

/**
 * *new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner
 * Return: a pointer to the new dog if a success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
