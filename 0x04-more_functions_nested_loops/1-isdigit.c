#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: character to check
 * Return: 1 for a digit, 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
