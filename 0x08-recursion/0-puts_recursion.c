#include "main.h"

/**
 * _puts_recursion - fucntion that prints a string, with a line new line
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{

	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
