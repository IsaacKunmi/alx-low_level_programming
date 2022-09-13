#include "main.h"

/**
 * print_alphabet - Entry
 *
 * Description: alphabets in lowercase
 *
 * Return: void
 */


void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar(10);

	return;

}

