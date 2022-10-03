#include "main.h"

/**
 *_strchr - entry
 *
 * Description: locates a character in a string
 *
 * @s: 
 *
 * @c:
 *
 * Return: pointer to dest
 */

char *_strchr(char *s, char c) 
{
	unsigned int i = 0;

	char *z;

	while( *(s + i) != '\0')
	{
		
		if(*(s + i) == c)
			return *(s + i);
		else
			return NULL;


		i++;
	}

	return (s + 1);

}

