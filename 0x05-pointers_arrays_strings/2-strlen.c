#include "main.h"

/**
 *_strlen - find length of string
 *
 * @s: char type
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	 char str[] = *s;
	 int x, i = 0;

	 for (x = 0; str[x] != '\0'; x++)
	 {
		 i++;
	 }

	 _putchar(i + '0');

}
