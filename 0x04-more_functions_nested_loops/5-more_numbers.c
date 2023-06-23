#include "main.h"

/**
 * more_numbers - print 10x table for 0-14
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 > 0)
			{
				_putchar((i / 10) + '0');
			} else
			{
				_putchar((i & 10) + '0');
			}
		}
		_putchar('\n');
	}
}
