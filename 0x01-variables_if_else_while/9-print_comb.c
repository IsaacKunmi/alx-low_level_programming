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
	int x = 0;

	while (x <= 9)
	{
	putchar(x + '0');
	
	if (x < 9)
	{
		putchar(44);
		putchar(32);
	}

	x++;
	}




	putchar('\n');

	return (0);

}
