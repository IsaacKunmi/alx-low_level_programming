#include "main.h"

/**
 * print_alphabet_x10 - Entry
 *
 * Description: alphabets in lowercase
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	int x;
	int y = 1;

	while (y <= 10)
	{

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar(10);
	y++;
	}

	return;

}

