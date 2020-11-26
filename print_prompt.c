#include "holberton.h"

/**
 * print_prompt - function to print the prompt
 *
 * Return: Nothing.
 */

void print_prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
	write(1, "($) ", 4);
	}
}
