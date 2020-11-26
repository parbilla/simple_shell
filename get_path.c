#include "holberton.h"

/**
 * get_path - Take the absolute path of the command
 *
 * @alltokens: a pointer to to a alltokens[0]
 *
 * Return: Always 0.
 */


char *get_path(char **alltokens)
{
	struct stat st;
	char *path = NULL, *token = NULL;
	char *tokenwithcommand = NULL, *tokenwithslash = NULL;
	int i = 0;

	if (alltokens == NULL)
		return (NULL);

	if (stat(alltokens[0], &st) == 0)
		return (alltokens[0]);

	path = envi_ron("PATH");
	token = strtok(path, ":");
	while (path)
	{
		tokenwithslash = str_concat(token, "/");
		tokenwithcommand = str_concat(tokenwithslash, alltokens[0]);
		free(tokenwithslash);
		if (stat(tokenwithcommand, &st) == 0)
		{
			_strcpy(alltokens[0], tokenwithcommand);
			free(tokenwithcommand);
			free(path);
			return (alltokens[0]);
		}
		free(tokenwithcommand);
		token = strtok(NULL, ":");
		i++;
	}
	path = NULL;
	return (NULL);
}

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destiny
 * @src: src
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src)
{
	int i;
	int ii;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (ii = 0 ; src[ii] != '\0' ; ii++)
	{
		dest[i + ii] = src[ii];
	}

	dest[i + ii] = '\0';
	return (dest);
}

/**
 * str_concat -  function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0.
 */


char *str_concat(char *s1, char *s2)
{
	char *new_concat;
	int j, jj;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	for (jj = 0; s2[jj] != '\0'; jj++)
	{
	}

	new_concat = (char *)malloc((j + jj + 1) * sizeof(char));

	if (new_concat == NULL)
	{
		return (NULL);
	}

	new_concat[0] = 0;

	_strncat(new_concat, s1);
	_strncat(new_concat, s2);

	return (new_concat);
}
