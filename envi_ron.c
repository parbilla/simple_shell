#include "holberton.h"

/**
 * *_strcpy - copy string pointed
 * @src: source
 * @dest: destiny
 *
 * Return: pointed to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != 0; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * envi_ron - Take the absolute path of the command
 * @path: a pointer to a alltokens[0]
 *
 * Return: Always 0.
 */

char *envi_ron(char *path)
{
	char *copyenv = NULL, *tempenv = NULL, *aux = NULL;
	int i = 0;

	while (environ[i] != NULL)
	{
		copyenv = malloc(_strlen(environ[i]) + 1);
		if (copyenv == NULL)
		{
			perror("ERROR: Insufficient memory allocation");
			exit(1);
		}
		_strcpy(copyenv, environ[i]);
		strtok(copyenv, "=");
		if (_strcmp(copyenv, path) == 0)
		{
			aux = strtok(NULL, "=");
			tempenv = _strdup(aux);
			aux = NULL;
			free(aux);
			free(copyenv);
			return (tempenv);
		}
		free(copyenv);
		i++;
	}
	return (NULL);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str:  string given as a parameter.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, ii;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	new_str = (char *)malloc(i * sizeof(char) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (ii = 0; ii < i; ii++)
	{
		new_str[ii] = str[ii];
	}

	return (new_str);
}

/**
 * *_strcmp - compares strings pointed
 * @s1: source
 * @s2: destiny
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int len1, len2, i, dif;

	for (len1 = 0; s1[len1] != 0; len1++)
	{
	}
	for (len2 = 0; s2[len2] != 0; len2++)
	{
	}
	for (i = 0; i < len1 && i < len2; i++)
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
	}
	return (0);
}
