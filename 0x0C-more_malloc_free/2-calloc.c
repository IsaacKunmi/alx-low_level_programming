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

	a = calloc(size, sizeof(nmemb));
		
		return (a);
}
