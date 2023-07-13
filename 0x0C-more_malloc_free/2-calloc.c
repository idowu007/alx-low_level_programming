#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory of an array using malloc and set all value to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;/* match the unsigned int size */

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	/* allocate memory and check for error */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0; /* typecast value */
	}
	return (ptr);
}
