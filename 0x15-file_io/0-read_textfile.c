#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, nrd, nwr;
	char *da_buff;

	if (filename == NULL)
		return (0);

	da_buff = malloc(sizeof(char) * letters);

	if (da_buff == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	nrd = read(opn, da_buff, letters);
	nwr = write(STDOUT_FILENO, da_buff, nrd);

	if(opn == -1 || nrd == -1 || nwr == -1 || nwr != nrd)
	{
		free(da_buff);
		return (0);
	}

	free(da_buff);
	close(opn);

	return (nwr);
}
