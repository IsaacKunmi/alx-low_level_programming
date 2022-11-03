#include "main.h"

/**
 *append_text_to_file - function appends text at the end of a file
 *
 *@filename: name of file
 *@text_content: string to add
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (!text_content)
		return (-1);

	for (b = 0; text_content[b]; b++)
		;

	c = write(a, text_content, b);

	if (c == -1)
		return (-1);

	close(a);

	return (1);
}

