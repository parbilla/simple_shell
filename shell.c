#include "holberton.h"

/**
 * main - Execute a mini shell
 *
 * Return: Always 0.
 */

int main(void)
{
	char **alltokens = NULL;
	char *input = NULL, *twc = NULL;
	int cont = 0;

	while (1)
	{
		print_prompt();
		input = get_input();
		cont = built_ins(input);
		if (cont == 0)
			continue;
		alltokens = get_tokenization(input);
		free(input);
		twc = get_path(alltokens);
		init_execution(alltokens, twc);
	}

	return (0);
}
