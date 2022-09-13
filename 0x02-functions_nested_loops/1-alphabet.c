#include "main.h"

/**
 * main - Entry
 *
 * Description: Header files
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	print_alphabet();

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar(10);

	return (0);

}

