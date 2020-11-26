#include "holberton.h"

/**
 * get_input - Read the input.
 *
 * Return: A pointer to the input.
 */
char *get_input(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t line;
	int i = 0, nospace = 0;

	line = getline(&input, &len, stdin);

	if (line == -1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		free(input);
		exit(0);
	}
	if (input[i] == '\n')
	{
		return (NULL);
	}

	for (; i < (line - 1); i++)
	{
		if (input[i] != ' ')
			nospace += 1;
	}

	if (nospace == 0)
		return (NULL);
	input[line - 1] = '\0';
	return (input);
}
