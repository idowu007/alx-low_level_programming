#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory to c,i,f,d using malloc
 * @b: size of malloc
 * Return: pointer to allocated memory, also 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
