#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp, b = 0;
	int end = n - 1;

	while (b < end)
	{
		tmp = *(a + b);
		*(a + b) = *(a + end);
		*(a + end) = tmp;
		b++, end++;
	}
}
