#include "main.h"

/**
 *_strchr - entry
 *
 * Description: locates a character in a string
 *
 * @s: string to check
 *
 * @c:charactteer to find
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		else if(*(s + 1) == c)
			return (s + 1);

		s++;
	}

	return (s + 1);
}