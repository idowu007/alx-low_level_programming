#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copy string pointed to src, including ('\0) to dest
 * @dest: copy source to this buffer
 * @src: souc=rce to copy from
 * Return: a copy of src
 */

char *_strcpy(char *dest, char *src)
{

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
