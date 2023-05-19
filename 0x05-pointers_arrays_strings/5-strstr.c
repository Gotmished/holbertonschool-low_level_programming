#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be found
 * Return:  a pointer to the located substring
 * NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j = j + 1;
			}
			else
			{
				break;
			}
		}
		if (needle[j] != '\0')
		{
			i = i + 1;
			j = 0;
		}
		else
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
