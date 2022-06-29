#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: stringin question
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i = i + 1;
	}
	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j = j + 1;
	}
	dest[j] = '\0';
	return (dest);
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
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);
	dog = malloc(sizeof(*dog));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(*name) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}

	dog->owner = malloc(sizeof(*owner) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
