#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or upper alphabet, 0 for non alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
