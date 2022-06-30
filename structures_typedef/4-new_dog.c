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
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog) + 1);
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
