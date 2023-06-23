#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: character to check
 * Return: 1 for uppercase, 0 for not
 */

int _isupper(int c)
{
	if  (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
