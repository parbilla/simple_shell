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
	int i = 0, c = 0;

	line = getline(&input, &len, stdin);

	if (line == -1)
	{
		perror("ERROR: Can't get the input");
		free(input);
		exit(-1);
	}
	if (input[i] == '\n')
	{
		return (NULL);
	}

	for (; i < (line - 1); i++)
	{
		if (input[i] != ' ')
			c++;
	}

	if (c == 0)
		return (NULL);

	input[line - 1] = '\0';
	return (input);
}
