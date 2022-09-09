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
	char c = '\n';

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}

	if (x == 'z')
		putchar(c);

	return (0);

}
