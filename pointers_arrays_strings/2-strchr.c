#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string in question
 * @c: the character in question
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			/* returns everything from the ith element onward*/
			return (s + i);
		}
		i = i + 1;
	}
	if (*(s + i) == c)
		{
			return (s + i);
		}
	else
	{
		return (0);
	}
}
