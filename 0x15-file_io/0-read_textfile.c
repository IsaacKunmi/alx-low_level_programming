#include"main.h"

/**
 * read_textfile - Entry point
 *
 * Description: reads a text file and prints it to
 * standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters that could be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int *buffer, a, c;

	if (!filename)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	c = open(filename, O_RDONLY);

	if (c == -1)
		return (0);

	a = read(c, buffer, letters);

	write(STDOUT_FILENO, buffer, a);

	close(c);

	free(buffer);

	return (a);
}
