#include <stdio.h>

/**
 * print_array - print n element of an array of intgers
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		printf("\n");
	}
}
