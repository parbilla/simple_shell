#include "holberton.h"
/**
 * _strlen - get string length.
 * @s: string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int num = 0;

	while (*(s + num) != '\0')
		num++;
	return (num);
}

/**
 * to_exit - exit the program.
 * @input: pointer to exit.
 *
 * Return: always.
 */
int to_exit(char *input)
{
	free(input);
	exit(1);
/*	return (0);*/
}

/**
 * printenv - print environment.
 * @input: pointer to env.
 *
 * Return: environment.
 */

int printenv(char *input)
{
	int i = 0, size = 0;

	while (environ[i] != '\0')
	{
		size = _strlen(environ[i]);
		write(1, environ[i], size);
		write(1, "\n", 1);
		i++;
	}
	free(input);
	return (0);
}

/**
 * built_ins - get builtins.
 * @input: pointer to input.
 *
 * Return: builtin.
 */

int built_ins(char *input)
{
	int i = 0;
	builtins built_ins[] =	{
		{"exit", to_exit},
		{"env", printenv},
		{NULL, NULL}
	};

	if (input == NULL)
		return (0);
	while (built_ins[i].name != NULL)
	{
		if (_strcmp(input, built_ins[i].name) == 0)
		{
			built_ins[i].f(input);
			return (0);
		}
		i++;
	}
	return (1);
}
