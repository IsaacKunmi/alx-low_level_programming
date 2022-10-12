#include "main.h"
/**
 *_strlen_recursion -counts the number of string
 *@s: char parameter string
 *Return: length of the input strin
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s == '\0')
		return (0);
	c = 1 + _strlen_recursion(s + 1);

	return (c);
}
