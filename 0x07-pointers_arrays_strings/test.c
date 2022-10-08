#include "main.h"
#include <stdlib.h>

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

	int i, j, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] == haystack[i + c])
		{
			if (haystack[i + j] != needle[j])
				break;
			c++;
		}

	if (needle[j + c] == '\0')
		return (&haystack[i]);

	j++;
	i++;
	}


	return (NULL);
}

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
