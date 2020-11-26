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
 * @path: a pointer to to a alltokens[0]
 *
 * Return: Always 0.
 */
char *envi_ron(char *path)
{
	char *copyenv = NULL;
	int i = 0;

	while (environ[i] != NULL)
	{
		if (_strstr(environ[i], path))
		{
			if (environ[i][_strlen(path)] == '=')
			{
				copyenv = malloc(_strlen(environ[i]) - _strlen(path));
				if (copyenv == NULL)
				{
					perror("ERROR: Insufficient memory allocation");
					exit(1);
				}
				_strcpy(copyenv, environ[i] + (_strlen(path) + 1));
				return (copyenv);
			}
		}
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
 * _strcmp - function to compare two strings
 * @s1: string compared
 * @s2: string compared
 * Return:  0 if they are the same and -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/**
 * _strstr - Write a function that locates a substring.
 *
 * @env: string
 *
 * @path: substring
 * Return: Always 0.
 */

char *_strstr(char *env, char *path)

{
	int i;

	if (*path == 0)
		return (env);
	for (i = 0; path[i] != '\0'; i++)
	{
		if (path[i] != env[i])
		{
			break;
		}
	}
	if (path[i] == '\0')
	{
		return (env);
	}
	return (NULL);
}
