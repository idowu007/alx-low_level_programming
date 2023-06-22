#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * Return:0
 */

void print_alphabet_x10(void)
{
	char i;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
