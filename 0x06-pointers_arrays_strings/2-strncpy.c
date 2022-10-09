#include "main.h"

/**
 *_strncpy - function copies a string
 *
 * @dest: buffer to save copied string
 * @src: strinf to be copied from
 * @n: number of bytes to copy
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src,  int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
