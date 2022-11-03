#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, b;

	a = open(filename, O_RDWR | O_CREAT, 0600);

	b = read(a, text_content, sizeof(text_content));

	write(a, text_content, b);

	return (1);
}
