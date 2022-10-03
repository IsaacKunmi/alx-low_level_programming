#include "main.h"

/**
 *_memcpy - entry
 *
 * Description: copies n bytes from src to dest
 *
 * @src: memory space source
 *
 * @dest: memeory space destination
 *
 * @n: number of spaces to fill
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);

		i++;
	}

	return (dest);

}

