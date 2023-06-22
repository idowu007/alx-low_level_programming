#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 * @c: character to check
 * Return: 1 if lowercase, 0 is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
