#include "main.h"

/**
 *malloc_checked- function that allocates mem
 *Description: allocates memory with alloc
 *@b: Size of memory to allocate
 *Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
