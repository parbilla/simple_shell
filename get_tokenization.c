#include "holberton.h"

/**
 * get_tokenization - Tokenize the input
 * @input: pointer to user input
 *
 * Return: Pointer to string tokenized
 */

char **get_tokenization(char *input)
{
	char **alltokens = NULL;
	int index, i = 0;
	char *token = NULL;

	alltokens = malloc(sizeof(char *) * SIZE_BUFF);
	if (alltokens == NULL)
	{
		perror("ERROR: Insufficient memory allocation");
		free(input);
		exit(1);
	}
	/* Inicializo en NULL */
	while (i < SIZE_BUFF)
	{
		alltokens[i] = NULL;
		i++;
	}
	/* Tokenizo */
	token = strtok(input, " ");
	index = 0;
	while (token)
	{
		alltokens[index] = malloc(sizeof(char) * _strlen(token));
		if (alltokens[index] == NULL)
		{
			perror("ERROR: Insufficent memory allocation");
			free(input);
			free_all(alltokens);
			exit(-2);
		}
		/* Copio el token al nuevo string en alltokens[index] */
		_strcpy(alltokens[index], token);
		token = strtok(NULL, " ");
		index++;
	}
	alltokens[index] = NULL;
	return (alltokens);

}
