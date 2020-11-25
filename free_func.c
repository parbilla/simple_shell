#include "holberton.h"

/**
 * free_all - frees alltokens.
 * @alltokens: input.
 *
 * Return: always.
 */

void free_all(char **alltokens)
{
	int i = 0;

	while (alltokens[i] != NULL)
	{
		free(alltokens[i]);
		i++;
	}
}
