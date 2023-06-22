#include "main.h"

/**
 * positive_or_negative - determine if integer is positive or negative
 * @i: integer argument
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	} else if (i < 0)
	{
		printf("%d is negavtive", i);
	} else
	{
		printf("%d is zero", i);
	}
}
