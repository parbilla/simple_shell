#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define SIZE_BUFF 100

/**
 * struct builtins - list of builtins
 * @name: builtin name
 * @f: builtin function
 */

typedef struct builtins
{
	char *name;
	int (*f)(char *input);
} builtins;

extern char **environ;

int _strcmp(char *s1, char *s2);
void print_prompt(void);
char *get_input(void);
int built_ins(char *input);
int to_exit(char *input);
int printenv(char *input);
char **get_tokenization(char *input);
char *get_path(char **alltokens);
char *str_concat(char *s1, char *s2);
int init_execution(char **alltokens, char *twc);
char *envi_ron(char *path);
char *_strdup(char *str);
int _strlen(char *s);
char *_getenv(const char *name);
void free_all(char **alltokens);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src);
#endif
