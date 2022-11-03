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
	int a, b;
	int *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	a = open(filename, O_RDONLY);

	b = read(a, buffer, letters);

	write(STDOUT_FILENO, buffer, b);

	return (a);
}


