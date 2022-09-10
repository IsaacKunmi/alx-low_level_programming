#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
	putchar(x + '0');
	}

	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);

}
