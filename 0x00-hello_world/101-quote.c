#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - entry point
 *
 * Description - prints text without using printf or puts
 *
 * Return: Always 1 (success)
 */

int main(void)
{
char print[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

int length = strlen(print);

write(2, print, length);

return (1);
}
