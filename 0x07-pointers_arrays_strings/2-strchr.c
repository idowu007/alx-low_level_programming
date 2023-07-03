#include "main.h"
#define NULL 0
/**
 * _strchr - locate the 1st character of char in a tring and return pointer
 * @s: string to search
 * @c: character needed
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
