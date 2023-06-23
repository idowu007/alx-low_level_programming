#include "main.h"

/**
 * print_line - print a straight line
 * @n: amount of characters
 */

void print_line(int n)
{
	int lines = n;

	for (lines = n; lines > 0; lines--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
