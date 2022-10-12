#include "main.h"
/**
 *_puts_recursion - print a string
 *@s: char parameter string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_puthcar('\n');
	else 
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
