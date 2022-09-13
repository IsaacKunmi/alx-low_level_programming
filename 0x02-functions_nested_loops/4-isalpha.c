#include "main.h"

/**
 * _isalpha - Entry
 *
 * @c: type int
 *
 * Description: checks for lowercase
 *
 * Return: 1 if it lower or 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 95 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}

