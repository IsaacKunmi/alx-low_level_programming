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

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);

}
