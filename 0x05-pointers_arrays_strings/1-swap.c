#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int empty;

	empty = *a;
	*a = *b;
	*b = empty;
}
