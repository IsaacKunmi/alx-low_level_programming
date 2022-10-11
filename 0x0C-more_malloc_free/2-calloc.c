#include "main.h"

/**
 *_calloc - allocates memory for an array
 *@nmemb: elemements in array
 *@size: byte size of elements
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = calloc(nmemb, sizeof(size));

	if (a == NULL)
	{
		return (NULL);
	}

		return (a);
}
