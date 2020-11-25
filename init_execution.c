#include "holberton.h"
/**
 * init_execution - Initialize the execution of a new process.
 * @alltokens: pointer to input tokenized
 * @twc: token with command.
 *
 * Return: Always 0.
 */

int init_execution(char **alltokens, char *twc)
{
	int status;
	pid_t child;

	child = fork();

	if (child == 0)
	{
		if ((execve(twc, alltokens, NULL)) == -1)
			perror("Error: ");
		free(twc);
		free_all(alltokens);
		exit(0);
	}
	else
	{
		wait(&status);
	}
	free_all(alltokens);
	free(alltokens);
	return (0);
}
