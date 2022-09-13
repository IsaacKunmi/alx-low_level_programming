#include "main.h"

/**
 * _islower - Entry
 *
 * @c: type int
 *
 * Description: checks for lowercase
 *
 * Return: 1 if it lower or 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 95 && c <= 122)
		return (1);
	else
		return (0);

}

