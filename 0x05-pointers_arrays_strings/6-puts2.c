#include "main.h"

/**
 * _strlen - gets the length pf a string
 * @s: string involved
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
 * puts2 - prints every other character of a string, then new line
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

				_putchar('\n');
}
