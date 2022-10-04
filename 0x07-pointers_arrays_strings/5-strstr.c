#include "main.h"

/**
 *_strstr - entry
 *
 * Description: locates a substring
 *
 * @haystack: string to check
 *
 * @needle: substring to find
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);

}
